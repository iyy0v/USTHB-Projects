package clients;

public class Client1 {
	public static void main(String[] args) {
		String[] requests = {"S7", "S10", "S1", "S2", "S4", "S3", "S0", "S6", "S12", "S11", "S8", "S5", "S2", "S1", "S0", "S5", "S1", "S7", "S9", "S2"};

		Client client = new Client(
				3001,
				3002,
				true,
				requests
		);

		client.run();
	}
}