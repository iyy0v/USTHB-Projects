package tp1;

import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Date;
import java.util.StringTokenizer;

public class Error {
	String time;
	String type;
	String msg;
	String pckg;
	String clss;
	String method;
	String line;
	
	@SuppressWarnings("deprecation")
	Error(Exception e) {
		StringTokenizer st = new StringTokenizer(e.getStackTrace()[0].getClassName(),".");
		Date now = new Date();
		time = String.format("%02d/%02d/%d %02d:%02d:%02d", now.getDate(), (now.getMonth()+1), (now.getYear()+1900), now.getHours(), now.getMinutes(), now.getSeconds());
		type = e.getClass().getCanonicalName();
		msg = e.getMessage();
		pckg = st.nextToken();
		clss = st.nextToken();
		method = e.getStackTrace()[0].getMethodName();
		line = String.format("%d",e.getStackTrace()[0].getLineNumber());
	}
	
	public void logsTxtFile() throws IOException {
		FileWriter writer = new FileWriter("ErrLogs.txt", true);

		String err = time + " - " + type + ":'" + msg + "' - " + pckg + "." + clss + "(" + method + ":" + line + ")\n";
		writer.write(err);
			
		writer.close();
	}
	
	public void logXmlFile() throws IOException {
		FileWriter writer = new FileWriter("ErrLog.xml", false);

		writer.write("<Exception>");
		writer.write("<Date>" + time + "</Date>");
		writer.write("<Type>" + type + "</Type>");
		writer.write("<Message>" + msg + "</Message>");
		writer.write("<Package>" + pckg + "</Package>");
		writer.write("<Class>" + clss + "</Class>");
		writer.write("<Method>" + method + "</Method>");
		writer.write("<Line>" + line + "</Line>");
		writer.write("</Exception>");
			
		writer.close();
	}
	
	public void logsXmlFile() {
		try {
			FileReader reader = new FileReader("ErrsLog.xml");
			if(!reader.ready()) {
				IOException l = new IOException();
				throw l;
			}
			char c;
			String rawData = "";
			while(reader.ready()) {
				c = (char) reader.read();
				rawData += c;
			}
			reader.close();
			
			String[] data = rawData.split("</");
			
			FileWriter writer = new FileWriter("ErrsLog.xml", false);
			int i = 0;
			while(i < data.length - 1) {
				if(i==0) writer.write(data[i]);
				else{
					writer.write("</" + data[i]);
				}
				i++;
			}

			writer.write("<Exception>");
			writer.write("<Date>" + time + "</Date>");
			writer.write("<Type>" + type + "</Type>");
			writer.write("<Message>" + msg + "</Message>");
			writer.write("<Package>" + pckg + "</Package>");
			writer.write("<Class>" + clss + "</Class>");
			writer.write("<Method>" + method + "</Method>");
			writer.write("<Line>" + line + "</Line>");
			writer.write("</Exception>");
						
			writer.write("</" + data[i]);
			writer.close();
		}
		catch(IOException i) {
			try {
				FileWriter writer = new FileWriter("ErrsLog.xml", true);
				writer.write("<Exceptions>");
				
				writer.write("<Exception>");
				writer.write("<Date>" + time + "</Date>");
				writer.write("<Type>" + type + "</Type>");
				writer.write("<Message>" + msg + "</Message>");
				writer.write("<Package>" + pckg + "</Package>");
				writer.write("<Class>" + clss + "</Class>");
				writer.write("<Method>" + method + "</Method>");
				writer.write("<Line>" + line + "</Line>");
				writer.write("</Exception>");
					
				writer.write("</Exceptions>");
				writer.close();
			}
			catch(IOException l) {
				System.out.println(l);
			}
		}
		
	}
}
