package Pack2;

import static org.junit.jupiter.api.Assertions.*;

import java.util.concurrent.TimeUnit;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.Timeout;


public class CalculeTest {

	Calcule cal=new Calcule();
	
	@Test
	void Testsomme() {assertEquals(10,cal.somme(5,5));}
	
	@Test
	void Testproduit() {assertEquals(25,cal.produit(5,5));}
	
	@Test
	@Timeout(value = 500, unit = TimeUnit.MILLISECONDS)
	void TestTPReflexion() {		
		assertEquals("Class - Package [pack]..",cal.TPReflexion("TP.java"));
}
	

	
	

}
