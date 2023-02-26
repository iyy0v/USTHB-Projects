package tp2;

import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class Logger {

	public void propClass(Class prototype) {
		System.out.println("\n======== " + prototype.getSimpleName() + " Protoype ========");
		
		System.out.println("Name: " + prototype.getSimpleName());
		System.out.println("Package: " + prototype.getPackageName());
		Field[] fields = prototype.getDeclaredFields();
		System.out.println("Attributes: ");
		for(int i = 0; i < fields.length; i++) {
			System.out.println("	" + fields[i].toString());
		}
		Constructor[] constructors = prototype.getDeclaredConstructors();
		System.out.println("Constructors: ");
		for(int i = 0; i < constructors.length; i++) {
			System.out.println("	" + constructors[i].toString());
		}
		Method[] methods = prototype.getDeclaredMethods();
		System.out.println("Methods: ");
		for(int i = 0; i < methods.length; i++) {
			System.out.println("	" + methods[i].toString());
		}
		System.out.println("================================");
	}
	
	public void logClass(Class prototype) {
		String name = prototype.getSimpleName();
		String pckg = prototype.getPackageName();
		Field[] fields = prototype.getDeclaredFields();
		Constructor[] constructors = prototype.getDeclaredConstructors();
		Method[] methods = prototype.getDeclaredMethods();
		try {
			FileWriter writer = new FileWriter(name + ".xml", false);
			writer.write("<" + name + ">\n");
				writer.write("<ClassName>");
					writer.write(name);
				writer.write("</ClassName>\n");
				writer.write("<Package>");
					writer.write(pckg);
				writer.write("</Package>\n");
				for(int i = 0; i < fields.length; i++) {
					
				}
			writer.write("</" + name + ">");
			writer.close();
		}
		catch(IOException i) {
			System.out.println(i);
		}
	}
}
