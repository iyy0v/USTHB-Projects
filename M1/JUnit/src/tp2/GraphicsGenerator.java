package tp2;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.lang.reflect.Method;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class GraphicsGenerator extends JPanel {
	private static List<HashMap<String, String>> classData = new ArrayList<HashMap<String, String>>();
	private static Integer X = 20, Y = 20;
	
	public static void addClassData(Class<?> clss) {
		HashMap<String,String> temp = new HashMap<String,String>();
		temp.put("Name",clss.getSimpleName());
		temp.put("Package",clss.getPackageName());
		temp.put("x",X.toString());
		temp.put("y",Y.toString());
		Integer i = 1;
		for(Method method : clss.getDeclaredMethods()) {
			temp.put("Method" + i.toString(), method.toGenericString());
			i++;
		}
		classData.add(temp);
		X += 180;
	}
	
	 public void paintComponent(Graphics g) {
		 super.paintComponent(g);
		 Graphics2D drawing = (Graphics2D) g;
		 for(HashMap<String,String> clss : classData) {
			 String name = clss.get("Name");
			 int X = Integer.parseInt(clss.get("x").trim());
			 int Y = Integer.parseInt(clss.get("y").trim());
			 drawing.setColor(Color.black);
			 drawing.drawRect(X, Y, 120, 80);
			 drawing.drawString(name, X + 40, Y + 35);
			 int i=0, j=0;
			 drawing.setColor(Color.red);
			 for(String key : clss.keySet()) {
				 if(key.contains("Method")) {
					 if(i<6 && j<4) {
						 drawing.fillRect(X + i*20, Y - 10, 10, 10);
						 i++;
						 continue;
					 }
				 }
			 }
		 }
		 
		 /*
		 dessin.setColor(Color.red); // Changement de la couleur en rouge
	    
		 dessin.fillRect(240, 210, 10, 10); // Dessin d'un rectange plein avec couleur rouge en position (x,y, longX, longY) 
	    
		 dessin.setColor(Color.black);   // Changement de la couleur en noir     
	    
		 dessin.drawString("F1", 215, 205); // Ecriture de la chaine Add dans la position (x,y)
	    
		 dessin.setColor(Color.green); // Changement de la couleur en vert
	    
		 dessin.fillRect(250, 195, 140, 90);
	    
	   	dessin.setColor(Color.black);    // Changement de la couleur en noir
	    
	    dessin.drawLine(240, 212, 20, 195); // Dessin d'un rectangle position (x1,y1) à (x2,y2)
	    
	    dessin.drawLine(240, 212, 20, 225);
	    
	    dessin.drawString("Formule.java", 260, 220);
	    
	    dessin.drawRect(250, 300, 150, 100); // Rectangle Vide
	    
	    dessin.drawOval(280, 420, 120, 100); // Oval vide
	    //................
	     
	     */
	  }

	  public static void main(String[] args) {
		ClassA a = new ClassA();
		ClassB b = new ClassB();
		addClassData(a.getClass());
		addClassData(b.getClass());
	    GraphicsGenerator rects = new GraphicsGenerator();  // Instancier un objet Panel
	    JFrame frame = new JFrame("Description graphique"); // Le titre de la fenetre 
	    frame.setSize(1240, 800);// La taille de la fenetre 
	    frame.add(rects);  // Ajouter le Panel à la fenetre
	    frame.setVisible(true);   // Rendre la fenetre visible 
	  }
}

