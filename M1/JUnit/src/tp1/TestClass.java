package tp1;

public class TestClass {
	public int x;
	
	public TestClass() {
		x = 0;
	}
	public TestClass(int x) {
		this.x = x;
	}
	
	public float diviseByX(int y) {
		return  y / x;
	}
}
