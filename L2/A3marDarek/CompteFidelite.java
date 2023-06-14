package Projet_A3marDarek;


public class CompteFidelite {
	private int nombreProduits;
	private double montantIM;
	private double montantEE;
	private double montantKS;
	private static double montantRemiseIM;
	private static double montantRemiseEE;
	private static double montantRemiseKS;
	private Lecture s = new Lecture();
	
	
	public CompteFidelite() {
		this(0,0,0,0);
	}
	
	public CompteFidelite(int nbr, float m1, float m2, float m3) {
		nombreProduits = nbr;
		montantIM = m1;
		montantEE = m2;
		montantKS = m3;
	}
	
	public void setNombreProduits (int nbr) { nombreProduits = nbr; }
	public void setMontantIM (double m1) { montantIM = m1; }
	public void setMontantEE (double m2) { montantEE = m2; }
	public void setMontantKS (double m3) { montantKS = m3; }
	public void setMontantRemiseIM (double mr1) { montantRemiseIM = mr1; }
	public void setMontantRemiseEE (double mr2) { montantRemiseEE = mr2; }
	public void setMontantRemiseKS (double mr3) { montantRemiseKS = mr3; }
	
	public int getNombreProduits() { return nombreProduits; }
	public double getMontantIM() { return montantIM;}
	public double getMontantEE() { return montantEE;}
	public double getMontantKS() { return montantKS;}
	public double getMontantRemiseIM() { return montantRemiseIM;}
	public double getMontantRemiseEE() { return montantRemiseEE;}
	public double getMontantRemiseKS() { return montantRemiseKS;}
	
	public void ajouterMontantIM (double m1) { montantIM += m1; }
	public void ajouterMontantEE (double m2) { montantEE += m2; }
	public void ajouterMontantKS (double m3) { montantKS += m3; }
	
	public void incrementerNombreProduits(int n) {
		nombreProduits += n;
	}
	
	public void afficher() {
		System.out.println(this.toString());
	}
	
	public String toString() {
		return "\n Nombre de produits achetés : " + nombreProduits + "\n Montant necessaire pour la remise des produits informatiques et mobiles : " + montantRemiseIM + "\n Montant cumulé des produits informatiques et mobiles : " + montantIM + "\n Montant necessaire pour la remise des produits électroniques et électroménager : " + montantRemiseEE + "\n Montant cumulé des produits électronique et électroménager : " + montantEE + "\n Montant necessaire pour la remise des kits solaires : " + montantRemiseKS + "\n Montant cumulé des kits solaires : " + montantKS ;
	}
	
	public static void modifierMontantRemise() {
		Affichage.ModifierMontantRemise();
		Lecture s = new Lecture();
		switch(s.Entier()) {
			case 0:
				break;
				
			case 1:
				Affichage.ModifierValeur();
				montantRemiseIM = s.Double();
				System.out.println("\n Le montant a été modifié !");
				break;
				
			case 2:
				Affichage.ModifierValeur();
				montantRemiseEE = s.Double();
				System.out.println("\n Le montant a été modifié !");
				break;
				
			case 3:
				Affichage.ModifierValeur();
				montantRemiseKS = s.Double();
				System.out.println("\n Le montant a été modifié !");
				break;
			
			default:
				Affichage.ChoixInconnu();
				
		}	
	}
	
	public void modifierCompteFidelite() {
		Affichage.ModifierCompteFidelite();
		
		switch(s.Entier()) {
			case 0:
				break;
						
			case 1:
				Affichage.ModifierValeur();
				nombreProduits = s.Entier();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 2:
				Affichage.ModifierValeur();
				montantIM = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 3:
				Affichage.ModifierValeur();
				montantEE = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 4:
				Affichage.ModifierValeur();
				montantKS = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 5:
				Affichage.ModifierValeur();
				montantRemiseIM = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 6:
				Affichage.ModifierValeur();
				montantRemiseEE = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
				
			case 7:
				Affichage.ModifierValeur();
				montantRemiseKS = s.Double();
				System.out.println("\n Le compte a été modifié !");
				break;
			
			default:
				Affichage.ChoixInconnu();
				
		}	
	}
}
