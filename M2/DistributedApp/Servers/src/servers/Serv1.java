package servers;

public class Serv1 {

	public static void main(String[] args) {
		Server server = new Server(2001);

		server.run();
	}

}
