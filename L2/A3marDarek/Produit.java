package Projet_A3marDarek;

public class Produit {
	private String nomProd;
	private CategorieP categorie;
	private String reference;
	private String descriptif;
	private String caracTech;
	private double prix;
	private int quantite;
	private Lecture s = new Lecture();
	
	public Produit() {
		this("",null,"","","",0,0);
	}
	
	public Produit(String nom, CategorieP categorie, String ref, String desc, String caract, double prix, int quant) {
		nomProd = nom;
		this.categorie = categorie;
		reference = ref;
		descriptif = desc;
		caracTech = caract;
		this.prix = prix;
		quantite = quant;
	}
	
	public void setNomProd (String nom) { nomProd = nom; }
	public void setCategorie (CategorieP categorie) { this.categorie = categorie; }
	public void setReference (String ref) { reference = ref; }
	public void setDescriptif (String desc) { descriptif = desc; }
	public void setCaracTech (String caract) { caracTech = caract; }
	public void setPrix (double prix) { this.prix = prix; }
	public void setQuantite (int quant) { quantite = quant; }
	
	
	public String getNomProd () { return nomProd; }
	public CategorieP getCategorie () { return categorie; }
	public String getReference () { return reference; }
	public String getDescriptif () { return descriptif; }
	public String getCaracTech () { return caracTech; }
	public double getPrix () { return prix; }
	public int getQuantite () { return quantite; }
	
	
	public void afficher() {
		System.out.println("\n=================================================");
		System.out.println(this.toString());
	}
	
	public String toString() { //pour affichage au client avec afficher la quantité du stock
		return toStringCommande() +"\n Quantité : " + quantite;
	}
	
	public String toStringCommande() { //pour affichage au client sans afficher la quantité du stock
		return "\n Nom : " + nomProd + "\n Categorie : " + categorie + "\n Reference : " + reference +"\n Descriptif : " + descriptif +"\n Caractéristiques techniques : " + caracTech +"\n Prix : " + prix;
	}
	
	public void saisirProduit() { 
		System.out.println("\n=================================================");
		System.out.println("\n Nom du produit : ");
		nomProd = s.String();
		
		while(categorie == null) {
			System.out.println("\n Catégorie :\n 1) Produits mobiles\n 2) Produits électroniques.\n 3) Produits électroménager.\n 4) Produits informatiques.\n 5) Kits solaires");
			switch(s.Entier()) {
				case 1:
					categorie = CategorieP.ProduitMobile;
					break;
				
				case 2:
					categorie = CategorieP.ProduitÉlectronique;
					break;
					
				case 3:
					categorie = CategorieP.ProduitÉlectroménager;
					break;
					
				case 4:
					categorie = CategorieP.ProduitInformatique;
					break;
					
				case 5:
					categorie = CategorieP.KitSolaire;
					break;
					
				default:
					Affichage.ChoixInconnu();
			}
		}
		
		System.out.println("\n Référence : ");
		reference = s.String();
		
		System.out.println("\n Déscriptif : ");
		descriptif = s.String();
		
		System.out.println("\n Caractéristiques techniques : ");
		caracTech = s.String();
		
		System.out.println("\n Prix : ");
		prix = s.Double();
		
		System.out.println("\n Quantité : ");
		quantite = s.Entier();
	}
	
	public void modifierProduit() {
		Affichage.ModifierProduit();
		switch(s.Entier()) {
			case 0:
				System.out.println("\n Le produit n'a pas été modifié !");
				break;
						
			case 1:
				Affichage.ModifierValeur();
				nomProd = s.String();
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 2:
				categorie=null;
				while(categorie == null) {
					System.out.println("\n Catégorie :\n 1) Produits mobiles\n 2) Produits électroniques.\n 3) Produits électroménager.\n 4) Produits informatiques.\n 5) Kits solaires");
					switch(s.Entier()) {
						case 1:
							categorie = CategorieP.ProduitMobile;
							break;
						
						case 2:
							categorie = CategorieP.ProduitÉlectronique;
							break;
							
						case 3:
							categorie = CategorieP.ProduitÉlectroménager;
							break;
							
						case 4:
							categorie = CategorieP.ProduitInformatique;
							break;
							
						case 5:
							categorie = CategorieP.KitSolaire;
							break;
							
						default:
							Affichage.ChoixInconnu();
					}
				}
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 3:
				Affichage.ModifierValeur();
				reference = s.String();
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 4:
				Affichage.ModifierValeur();
				descriptif = s.String();
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 5:
				Affichage.ModifierValeur();
				caracTech = s.String();
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 6:
				Affichage.ModifierValeur();
				prix = s.Double();
				System.out.println("\n Le produit a été modifié !");
				break;
				
			case 7:
				Affichage.ModifierValeur();
				quantite = s.Entier();
				System.out.println("\n Le produit a été modifié !");
				break;
			
			default:
				Affichage.ChoixInconnu();		
		}	
	}
}
