package tp2;

import java.io.IOException;

public class main {
	public static void main(String[] args) throws IOException {
		Dummy d1 = new Dummy();
		Dummy d2 = new Dummy(5,"Hello World !");
		
		d1.showValues();
		d2.showValues();
		System.out.println("Dummies created : " + d1.getCount());
		
		Logger logger = new Logger();
		
		Class<?> clss = Dummy.class;
		logger.propClass(clss);
		
		
		ClassA a = new ClassA();
		ClassB b = new ClassB();
		
		
		b.showValues();
		
		a.AsetsX2(10, b);
		a.AsetsStr2("CLASS B IS THE BEST !", b);
		
		b.BsetsX1(5, a);
		b.BsetsStr1("CLASS A RULES !", a);
		
		
		b.showValues();
		
		
		logger.propClass(ClassA.class);
		logger.propClass(ClassB.class);
		
		logger.logClass(ClassA.class);
		logger.logClass(ClassB.class);
		
		logger.logRelations(ClassA.class, ClassB.class);
		
		System.out.println("\n========================================\n");
		System.out.println("Everything has been executed succesfully.\n");
	}
}
