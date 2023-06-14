package Projet_A3marDarek;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Lecture {
	Scanner s;
	private int n;
	
	public Lecture() {
		s = new Scanner(System.in);
	}
	
	public int Entier() {
		s = new Scanner(System.in);
		try { return s.nextInt(); }
		catch(InputMismatchException e) {
			System.out.println("\n Ce n'est pas un entier !\n Réssayez : ");
			return this.Entier();
		}
	}
	
	public int EntierS(int i) {
		int n = this.Entier();
		if(n>i) { return n; }
		else { 
			System.out.println("\n La valeur doit être > " + i);
			return this.EntierS(i); 
			}
	}
	
	public int EntierI(int i) {
		int n = this.Entier();
		if(n<i) { return n; }
		else { 
			System.out.println("\n La valeur doit être < " + i);
			return this.EntierI(i); 
			}
	}
	
	public float Float() {
		s = new Scanner(System.in);
		try { return s.nextFloat(); }
		catch(InputMismatchException e) {
			System.out.println("\n Ce n'est pas un float !\n Réssayez : ");
			return this.Entier();
		}
	}
	
	public double Double() {
		s = new Scanner(System.in);
		try { return s.nextDouble(); }
		catch(InputMismatchException e) {
			System.out.println("\n Ce n'est pas un double !\n Réssayez : ");
			return this.Entier();
		}
	}
	
	public double DoubleS(double i) {
		double n = this.Double();
		if(n>i) { return n; }
		else { 
			System.out.println("\n La valeur doit être > " + i);
			return this.DoubleS(i); 
			}
	}
	
	public double DoubleI(double i) {
		double n = this.Double();
		if(n<i) { return n; }
		else { 
			System.out.println("\n La valeur doit être < " + i);
			return this.DoubleI(i); 
			}
	}
	
	public String String() {
		s = new Scanner(System.in);
		return s.nextLine();
	}
	
	
	public int Jour(int mois) {
		if(mois==4||mois==6||mois==9||mois==11) 
		{
			n = this.Entier();
			if(0<n && n<30) { return n; }
			else { 
				System.out.println("\n Réssayez : ");
				return this.Jour(mois); 
				}
		}
		else
			{
			if(mois==2) {
				n = this.Entier();
				if(0<n && n<29) { return n; }
				else { 
					System.out.println("\n Réssayez : ");
					return this.Jour(mois); 
					}
			}
			else {
				n = this.Entier();
				if(0<n && n<31) { return n; }
				else { 
					System.out.println("\n Réssayez : ");
					return this.Jour(mois); 
					}
			}
		}
	}
	
	public int Mois() {
		n = this.Entier();
		if(0<n && n<13) { return n; }
		else { 
			System.out.println("\n Réssayez : ");
			return this.Mois(); 
			}
	}
}
