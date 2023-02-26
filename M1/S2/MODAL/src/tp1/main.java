package tp1;

import java.io.IOException;

public class main {
	
	static TestClass test = new TestClass();
	
	public static void main(String[] args) throws IOException {
		
		System.out.println("Hello world !");
		
		try {
			System.out.println(test.diviseByX(4));
		}
		catch(Exception e) {
			Error error = new Error(e);
			error.logsTxtFile();
			error.logXmlFile();
			error.logsXmlFile();
		}
	}
}
