package servers;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.Socket;
import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

import dbEntities.Service;


public class Inter extends java.rmi.server.UnicastRemoteObject implements InterfaceInterRMI {

	static String address;
	static int port;
	String[] addresses = new String[]{"127.0.0.1","127.0.0.1","127.0.0.1","127.0.0.1","127.0.0.1"};
	int[] ports = new int[]{2001, 2002, 2003, 2004, 2005};

	Inter() throws RemoteException {
		Inter.address = "127.0.0.1";
		Inter.port = 2000;
	}

	Inter(String address, int port) throws RemoteException {
		Inter.address = address;
		Inter.port = port;
	}

	@Override
	public Service requestService(String request) throws RemoteException {
		Service service = null;
		try {
			String addressServ;
			int portServ;

			switch(request.toUpperCase()) {
				case "S0":
				case "S1":
				case "S2":
				case "S3":
					addressServ = addresses[0];
					portServ = ports[0];
					break;
				case "S4":
				case "S5":
				case "S6":
					addressServ = addresses[1];
					portServ = ports[1];
					break;
				case "S7":
				case "S8":
				case "S9":
					addressServ = addresses[2];
					portServ = ports[2];
					break;
				case "S10":
				case "S11":
				case "S12":
					addressServ = addresses[3];
					portServ = ports[3];
					break;
				case "S13":
				case "S14":
				case "S15":
					addressServ = addresses[4];
					portServ = ports[4];
					break;
				default:
					throw new Exception("Unknown service!");
			}
			int serviceNumber = Integer.parseInt(request.substring(1));

			Socket connection = new Socket(addressServ, portServ);
			System.out.println("Connected to " + addressServ + ':' + portServ);

			System.out.println("Sending request for Service #" + serviceNumber);
			ObjectOutputStream output = new ObjectOutputStream(connection.getOutputStream());
			output.writeObject(serviceNumber);
			ObjectInputStream input = new ObjectInputStream(connection.getInputStream());
			service = (Service) input.readObject();
			System.out.println("Received " + service.getName());

			connection.close();

		}
		catch(Exception e) {
			e.printStackTrace();
		}
		System.out.println("Returning " + service.getName());
		return service;
	}


	public static void main(String[] args) {
		try {
			Inter server = new Inter();
			Registry registry = LocateRegistry.createRegistry(port);
			System.out.println("Created registry on port: " + port);
			registry.rebind("rmiServer", server);
		}
		catch(Exception e) {
			System.out.println("Exception: " + e.toString());
			System.exit(1);
		}
	}
}
