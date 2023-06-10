package tp2;

public class ClassB {
	private int x2;
	private String str2;
	private ClassA a2;
	static int countB = 0;
	
	ClassB() {
		x2 = 0;
		str2 = "";
		countB++;
	}
	ClassB(int n, String s) {
		x2 = n;
		str2 = s;
		countB++;
	}
	
	public int getX2() {
		return x2;
	}
	public String getStr2() {
		return str2;
	}
	public ClassA getA2() {
		return a2;
	}
	
	public void setX2(int n) {
		x2 = n;
	}
	public void setStr2(String s) {
		str2 = s;
	}
	public void setA2(ClassA a) {
		a2 = a;
	}
	
	public void showValues() {
		System.out.println("x2 = " + x2 + ", str2 = '" + str2 + "'");
	}
	
	public void BsetsX1(int n, ClassA a) {
		a.setX1(n);
	}
	public void BsetsStr1(String s, ClassA a) {
		a.setStr1(s);
	}
	
	
}
