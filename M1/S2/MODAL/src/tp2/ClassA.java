package tp2;

public class ClassA {
	private int x1;
	private int x2;
	private String str1;
	private ClassB b1 = new ClassB();
	static int countA = 0;
	
	ClassA() {
		x1 = 0;
		str1 = "";
		countA++;
	}
	ClassA(int n, String s) {
		x1 = n;
		str1 = s;
		countA++;
	}
	
	public int getX1() {
		return x1;
	}
	public int getX2() {
		return x2;
	}
	public String getStr1() {
		return str1;
	}
	public ClassB getb1() {
		return b1;
	}
	
	public void setX1(int n) {
		x1 = n;
	}
	public void setX2(int n) {
		x2 = n;
	}
	public void setStr1(String s) {
		str1 = s;
	}
	public void setB1(ClassB b) {
		b1 = b;
	}
	
	public void showValues() {
		System.out.println("x1 = " + x1 + ", str1 = '" + str1 + "'");
		b1.showValues();
	}
	
	public void AsetsX2(int n, ClassB b) {
		if(n != b.getX2()) {
			b.setX2(n);
		}
	}
	public void AsetsStr2(String s, ClassB b) {
		b.setStr2(s);
	}
	public void AsetsOwnX2(int n, ClassB b) {
		if(n != this.getX2()) {
			this.setX2(n);
		}
	}
}
