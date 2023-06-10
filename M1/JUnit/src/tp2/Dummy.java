package tp2;

public class Dummy {
	private int x;
	private String str;
	private static int count = 0;
	
	Dummy() {
		x = 0;
		str = "";
		count++;
	}
	Dummy(int y, String str) {
		x = y;
		this.str = str;
		count++;
	}
	
	public int getX() {
		return x;
	}
	public String getStr() {
		return str;
	}
	public int getCount() {
		return count;
	}
	
	public void setX(int y) {
		x = y;
	}
	public void setStr(String s) {
		str = s;
	}
	
	public void showValues() {
		System.out.println("X = " + x + ", str = '" + str + "'");
	}
}
