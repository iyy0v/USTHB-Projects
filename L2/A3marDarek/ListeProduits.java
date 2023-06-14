package Projet_A3marDarek;

import java.util.ArrayList;

public class ListeProduits {
	
	ArrayList<Produit> produits;
	private Lecture s = new Lecture();
	
	public ListeProduits() {
		produits = new ArrayList<Produit>();
	}
	
	public ListeProduits(ArrayList<Produit> produits) {
		this.produits = new ArrayList<Produit>(produits);
	}
	
	public Produit getProduit(int i) {
		return produits.get(i);
	}
	
	
	public void ajouterProduit() {
		Produit p = new Produit();
		p.saisirProduit();
		produits.add(p);
	}
	
	public void ajouterListeProduits()
	{
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le nombre de produits : ");
		
		int nb = s.Entier();
		for(int i=0; i<nb; i++) {
			this.ajouterProduit();
		}
	}
	
	public void modifierProduit() {
		int i=this.rechercherProduit();
		if(i!=-1) {
			produits.get(i).modifierProduit();
		}
		else {
			System.out.println("\n Produit non trouvé !");
		}
	}
	
	public void supprimerProduit() {
		int i=this.rechercherProduit();
		if(i!=-1) {
			produits.remove(i);
			System.out.println("\n Produit supprimé !");
		}
		else { System.out.println("\n Produit non trouvé !"); }
	}
	
	public void afficherProduits() {
		System.out.println("\n=================================================");
		int i;
		do {
			System.out.println("\n\n Entrer la catégorie du produit que vous voulez afficher :\n 1) Produits mobiles.\n 2) Produits électroniques.\n 3) Produits électroménager.\n 4) Produits informatique.\n 5) Kits solaires.");
			i = s.Entier();
		} while((i<1) || (i>5));
		for(int j=0; j<produits.size(); j++) { 
			if(produits.get(j).getCategorie() == CategorieP.values()[i-1]) {
				produits.get(j).afficher();
			}
		}
	}
	
	public void afficherProduitsDispo() {
		System.out.println("\n=================================================");
		int i;
		do {
			System.out.println("\n\n Entrer la catégorie du produit que vous voulez afficher :\n 1) Produits mobiles.\n 2) Produits électroniques.\n 3) Produits électroménager.\n 4) Produits informatique.\n 5) Kits solaires.");
			i = s.Entier();
		} while((i<1) || (i>5));
		for(int j=0; j<produits.size(); j++) { 
			if((produits.get(j).getCategorie() == CategorieP.values()[i-1]) && produits.get(j).getQuantite()>0) {
				System.out.println(produits.get(j).toStringCommande());
				System.out.println("\n - - - - - - - - - - - - - - - - - - - - -");
			}
		}
	}
	
	public int rechercherProduit() {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer la référence du produit : ");
		String temp = s.String();
		for(int i=0; i<produits.size(); i++) {
			if(temp.equals(produits.get(i).getReference())) { 
				return i;
			}
		}
		return -1;
	}

}
