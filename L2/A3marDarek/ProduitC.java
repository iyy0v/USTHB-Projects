package Projet_A3marDarek;

public class ProduitC {
	private Produit produit;
	private int quantite;
	
	public ProduitC() {
		this(null,0);
	}
	
	public ProduitC(Produit produit, int quantite) {
		this.produit = produit;
		this.quantite = quantite;
	}
	
	public void setProduit(Produit produit) { this.produit = produit; }
	public void setQuantite(int quantite) { this.quantite = quantite; }
	
	public Produit getProduit() { return produit; }
	public int getQuantite() { return quantite; }
	
	public void ajouterQuantite(int quantite) { this.quantite += quantite; }
	
	public void afficher() {
		System.out.println(this.toString());
	}
	
	public String toString() {
		return produit.toStringCommande() + "\n Quantité commandé : " + quantite + "\n Prix de toute la quantité = " + produit.getPrix()*quantite;
	}
	
	
	
}
