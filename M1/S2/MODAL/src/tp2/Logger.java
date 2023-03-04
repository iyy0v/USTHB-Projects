package tp2;

import java.io.FileWriter;
import java.io.IOException;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Parameter;
import java.util.Arrays;

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
	private String[] getRelations(Class<?> prototype1, Class<?> prototype2) throws IOException {
		Field[] fields1 = prototype1.getDeclaredFields();
		Method[] methods1 = prototype1.getDeclaredMethods();
		Method[] methods2 = prototype2.getDeclaredMethods();
		String[] relations = new String[] {};
		
		for(int i = 0; i < methods1.length; i++) {
			String methodCode = SourceCodeExtractor.extractSourceCode(prototype1, methods1[i].getName());
			System.out.println(methodCode);
			for(int j = 0; j < methods2.length; j++) {
				if(methodCode.contains(methods2[j].getName())) {
					for(int k = 0; k < fields1.length; k++) {
						if(fields1[k].getType() == prototype2 && methodCode.contains(fields1[k].getName() + "." + methods2[j].getName())) {
							System.out.println(methods1[i].getName() + " => " + methods2[j].getName());
							relations = Arrays.copyOf(relations, relations.length + 1);
							relations[relations.length-1] = methods1[i].getName() + " " + methods2[j].getName();
						}
					}
					for(int k = 0; k < methods1[i].getParameterCount(); k++) {
						if(methods1[i].getParameters()[k].getType() == prototype2 && methodCode.contains(methods1[i].getParameters()[k].getName() + "." + methods2[j].getName())) {
							System.out.println(methods1[i].getName() + " => " + methods2[j].getName());
							relations = Arrays.copyOf(relations, relations.length + 1);
							relations[relations.length-1] = methods1[i].getName() + " " + methods2[j].getName();
						}
					}
				}
			}
		}
		return relations;
	}
	
	public void logRelations(Class<?> prototype1, Class<?> prototype2) throws IOException {
		String[] relations1 = this.getRelations(prototype1, prototype2);
		String[] relations2 = this.getRelations(prototype2, prototype1);
		
		try {
			FileWriter writer = new FileWriter("Relations_" + prototype1.getSimpleName() + "_" + prototype2.getSimpleName() + ".xml", false);
			
			writer.write("<Relations>");
				writer.write("<" + prototype1.getSimpleName() + "_To_" + prototype2.getSimpleName() + ">");
					for(String relation: relations1) {
						writer.write("<Relation>");
							writer.write("<Source>");
								writer.write("<Class>");
									writer.write(prototype1.getName());
								writer.write("</Class>");
								writer.write("<Method>");
									writer.write(relation.split(" ")[0]);
								writer.write("</Method>");
							writer.write("</Source>");
							writer.write("<Target>");
								writer.write("<Class>");
									writer.write(prototype2.getName());
								writer.write("</Class>");
								writer.write("<Method>");
									writer.write(relation.split(" ")[1]);
								writer.write("</Method>");
							writer.write("</Target>");
						writer.write("</Relation>");
					}
				writer.write("</" + prototype1.getSimpleName() + "_To_" + prototype2.getSimpleName() + ">");
				writer.write("<" + prototype2.getSimpleName() + "_To_" + prototype1.getSimpleName() + ">");
					for(String relation: relations2) {
						writer.write("<Relation>");
							writer.write("<Source>");
								writer.write("<Class>");
									writer.write(prototype2.getName());
								writer.write("</Class>");
								writer.write("<Method>");
									writer.write(relation.split(" ")[0]);
								writer.write("</Method>");
							writer.write("</Source>");
							writer.write("<Target>");
								writer.write("<Class>");
									writer.write(prototype1.getName());
								writer.write("</Class>");
								writer.write("<Method>");
									writer.write(relation.split(" ")[1]);
								writer.write("</Method>");
							writer.write("</Target>");
						writer.write("</Relation>");
					}
				writer.write("</" + prototype2.getSimpleName() + "_To_" + prototype1.getSimpleName() + ">");
			writer.write("</Relations>");
			
			writer.close();
		}
		catch(IOException i) {
			System.out.println(i);
		}
	}
}
