package servers;

import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.Properties;

import javax.naming.InitialContext;

import dbEntities.IGestion;
import dbEntities.InfoServer;
import dbEntities.Service;

public class Server {
	ServerSocket server;
	Socket connection;
	ObjectInputStream input;
	ObjectOutputStream output;

	int port;

	int serviceNum;
	Service service;

	Server(int port) {
		this.port = port;
	}

	public void run () {
		try{
			 Properties props = new Properties();
			 props.put("java.naming.factory.url.pkgs","org.jboss.ejb.client.naming");
			 props.put("jboss.naming.client.ejb.context",true);

			 InitialContext context = new InitialContext(props);

			 IGestion in = (IGestion)context.lookup("ejb:/DB/GestionService!dbEntities.IGestion");

			 InfoServer infoServer = new InfoServer(this.port);
			 in.addServer(infoServer);

			 server = new ServerSocket(port);
			 System.out.println("Waiting for inter-server...");

			 while(true) {
				 connection = server.accept();
				 System.out.println("Connected.");
				 System.out.println("Reading...");
				 input = new ObjectInputStream(connection.getInputStream());
				 serviceNum = (int) input.readObject();
				 System.out.println("Processing...");
				 service = in.searchService(serviceNum);
				 System.out.println("Sending...");
				 output = new ObjectOutputStream(connection.getOutputStream());
				 output.writeObject(service);
				 System.out.println("Done.\n");
			 }
		}
		catch(Exception e) {
			e.printStackTrace();
		}
	}
}
