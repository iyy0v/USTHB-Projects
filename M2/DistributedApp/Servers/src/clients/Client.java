package clients;

import java.net.DatagramPacket;
import java.net.DatagramSocket;
import java.net.InetAddress;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

import dbEntities.Service;
import servers.InterfaceInterRMI;

public class Client {
	int port;
	int nextPort;
	boolean hasToken;
	String[] requests;
	int TIMER_SLEEP;
	
	private static String[] removeFirstRequest(String[] array) {
        if (array == null || array.length <= 1) {
            return new String[0];
        }

        String[] newArray = new String[array.length - 1];
        System.arraycopy(array, 1, newArray, 0, newArray.length);

        return newArray;
    }
	
	Client(int port, int nextPort, boolean isFirst, String[] requests) {
		this.port = port;
		this.nextPort = nextPort;
		hasToken = isFirst;
		this.requests = requests;
		TIMER_SLEEP = 10000;
	}
	
	Client(int port, int nextPort, boolean isFirst, String[] requests, int duration) {
		this.port = port;
		this.nextPort = nextPort;
		hasToken = isFirst;
		this.requests = requests;
		TIMER_SLEEP = duration;
	}

	public void requestService() {
		try {
			// Connect to Inter server
			Registry registry = LocateRegistry.getRegistry("127.0.0.1",2000);
			System.out.println("Connected to Inter on port: 2000");
			InterfaceInterRMI Inter = (InterfaceInterRMI) registry.lookup("rmiServer");
			
			// Send request
			if(requests.length > 0) {
				System.out.println("Requesting: " + requests[0]);
				Service service = Inter.requestService(requests[0]);
				System.out.println("Received: " + service.getName());
						
				// Delete the sent request from the queue
				requests = removeFirstRequest(requests);
				System.out.println(requests.length + " requests left.\n");
			}
			Thread.sleep(2000);
					
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public void waitToken() {
		try {
			if(hasToken == false) {
				System.out.println("Waiting for the token...\n");
				DatagramSocket socket = new DatagramSocket(port);
				byte[] receiveData = new byte[10];
				DatagramPacket rPacket = new DatagramPacket(receiveData, receiveData.length);
				socket.receive(rPacket);
				String msg = new String(rPacket.getData());
				if(msg != null) hasToken = true;
				socket.close();
			}
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
	
	public void passToken() {
		try {
			// Send Token to next client
				DatagramSocket socket = new DatagramSocket();
				String msg = "token";
				byte[] sendData = new byte[10];
				sendData = msg.getBytes();
				InetAddress ip = InetAddress.getByName("localhost");
				DatagramPacket sPacket = new DatagramPacket(sendData, sendData.length, ip, nextPort);
				socket.send(sPacket);
				System.out.println("Token sent to : " + nextPort + "\n");
				socket.close();
				hasToken = false;
		}
		catch(Exception e) {}
	}
	
	public void run() {
		try {
			while(true) {
				waitToken();
				Thread timer = new Thread(() -> {
					try {
						requestService();
						passToken();
					}
					catch(Exception e) {
						e.printStackTrace();
					}
				});
				timer.start();
				Thread.sleep(TIMER_SLEEP);
				
				if(hasToken) {
					timer.interrupt();
					passToken();
				}
			}
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
}
