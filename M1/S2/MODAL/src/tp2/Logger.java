package tp2;

import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Parameter;

public class Logger {

	public void propClass(Class<?> prototype) {
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
	
	public void logClass(Class<?> prototype) {
		String name = prototype.getSimpleName();
		String pckg = prototype.getPackageName();
		Field[] fields = prototype.getDeclaredFields();
		Constructor[] constructors = prototype.getDeclaredConstructors();
		Method[] methodes = prototype.getDeclaredMethods();
		try {
			FileWriter writer = new FileWriter(name + ".xml", false);
			writer.write("<" + name + ">\n");
				writer.write("<ClassName>");
					writer.write(name);
				writer.write("</ClassName>\n");
				writer.write("<Package>");
					writer.write(pckg);
				writer.write("</Package>\n");
				writer.write("<Attributes>\n");
				for(int i = 0; i < fields.length; i++) {
					writer.write("<Attribut>\n");
						writer.write("<Name>");
							writer.write(fields[i].getName());
						writer.write("</Name>\n");
						writer.write("<Type>");
							writer.write(fields[i].getType().getTypeName());
						writer.write("</Type>\n");
					writer.write("</Attribut>\n");
				}
				writer.write("</Attributes>\n");
				writer.write("<Constructors>\n");
				for(int i = 0; i < constructors.length; i++) {
					writer.write("<Constructor>\n");
						writer.write("<Name>");
							writer.write(constructors[i].getName());
						writer.write("</Name>\n");
						writer.write("<Parameters>");
						Parameter[] parameters = constructors[i].getParameters();
						for(int j = 0; j < parameters.length; j++) {
							writer.write("<Parameter>");
								writer.write("<Name>");
									writer.write(parameters[j].getName());
								writer.write("</Name>");
								writer.write("<Type>");
									writer.write(parameters[j].getType().getTypeName());
								writer.write("</Type>");
							writer.write("</Parameter>");
						}
						writer.write("</Parameters>\n");
					writer.write("</Constructor>\n");
				}
				writer.write("</Constructors>\n");
				writer.write("<Methodes>\n");
				for(int i = 0; i < methodes.length; i++) {
					writer.write("<Method>\n");
						writer.write("<Name>");
							writer.write(methodes[i].getName());
						writer.write("</Name>\n");
						writer.write("<ReturnType>");
							writer.write(methodes[i].getGenericReturnType().getTypeName());
						writer.write("</ReturnType>\n");
						writer.write("<Parameters>");
						Parameter[] parameters = methodes[i].getParameters();
						for(int j = 0; j < parameters.length; j++) {
							writer.write("<Parameter>");
								writer.write("<Name>");
									writer.write(parameters[j].getName());
								writer.write("</Name>");
								writer.write("<Type>");
									writer.write(parameters[j].getType().getTypeName());
								writer.write("</Type>");
							writer.write("</Parameter>");
						}
						writer.write("</Parameters>\n");
					writer.write("</Method>\n");
				}
				writer.write("</Methodes>\n");
			writer.write("</" + name + ">");
			writer.close();
		}
		catch(IOException i) {
			System.out.println(i);
		}
	}
	public void logRelations(Class<?> prototype1, Class<?> prototype2) {
		String name1 = prototype1.getSimpleName();
		String name2 = prototype2.getSimpleName();
		Method[] methods1 = prototype1.getDeclaredMethods();
		Method[] methods2 = prototype2.getDeclaredMethods();
		try {
			FileWriter writer = new FileWriter("Relations_" + name1 + "_" + name2 + ".xml", false);
			SourceCodeExtractor extractor = new SourceCodeExtractor();
			
			writer.write("<Relations>");
				writer.write("<" + name1 + "To" + name2 + ">");
				for(int i = 0; i < methods1.length; i++) {
					String methodCode = extractor.extractSourceCode(prototype1, methods1[i].getName());
					System.out.println(methods1[i].getName() + " {");
					System.out.println(methodCode);
					System.out.println("}");
				}
				writer.write("</" + name1 + "To" + name2 + ">");
				writer.write("<" + name2 + "To" + name1 + ">");
				for(int i = 0; i < methods2.length; i++) {
					String methodCode = extractor.extractSourceCode(prototype2, methods2[i].getName());
					System.out.println(methods2[i].getName() + " {");
					System.out.println(methodCode);
					System.out.println("}");
				}
				writer.write("</" + name2 + "To" + name1 + ">");
			writer.write("</Relations>");
			
			writer.close();
		}
		catch(IOException i) {
			System.out.println(i);
		}
	}
}
