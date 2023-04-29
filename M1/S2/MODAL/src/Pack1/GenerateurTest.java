package Pack1;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

import tp2.ClassA;

public class GenerateurTest
{
	
	public static void generateTest(Class cls) {
		try {
			File f = new File ("./src/" + cls.getPackageName() + "/Test" + cls.getSimpleName() + ".java");
			BufferedWriter bw = new BufferedWriter(new FileWriter(f, false));
			bw.write("package " + cls.getPackageName() + ";");
			bw.newLine();bw.newLine();
			bw.write("import static org.junit.jupiter.api.Assertions.*;");
			bw.newLine();
			bw.write("import org.junit.jupiter.api.Test;");
			bw.newLine();bw.newLine();
			bw.write("public class Test" + cls.getSimpleName() + " {");
			bw.newLine();bw.newLine();
			bw.write("\t" + cls.getSimpleName() + " x = new " + cls.getSimpleName() + "();");
			bw.newLine();bw.newLine();
			for(int i = 0; i < cls.getDeclaredMethods().length; i++) {
				bw.write("\t@Test");
				bw.newLine();
				bw.write("\tvoid Test_" + cls.getDeclaredMethods()[i].getName() + "() {assertEquals(?,x." + cls.getDeclaredMethods()[i].getName() + "(");
				for(int j = 0; j < cls.getDeclaredMethods()[i].getParameterCount(); j++) {
					if(j == (cls.getDeclaredMethods()[i].getParameterCount() - 1)) bw.write("?");
					else bw.write("?,");
				}
				bw.write("));}");
				bw.newLine();
			}
			bw.write("}");
			//..............
			System.out.println ("Test file generated ...");
			bw.close();
		} 
		catch (IOException e) { 
			System.out.println ("Error while generating the test file : " + e.getMessage());
		}
	}

	public static void main(String args[]) {
		generateTest(ClassA.class);
	}

}