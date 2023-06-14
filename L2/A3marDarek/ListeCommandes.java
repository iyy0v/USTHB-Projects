package Projet_A3marDarek;

import java.util.ArrayList;


public class ListeCommandes {
	ArrayList<Commande> commandes;
	private Lecture s = new Lecture();
	
	public ListeCommandes() {
		commandes = new ArrayList<Commande>();
	}
	
	public ListeCommandes(ArrayList<Commande> commandes) {
		this.commandes = new ArrayList<Commande>(commandes);
	}

	
	public void ajouterCommandeAdmin(ListeClients clients,ListeProduits produits) {
		Commande C = new Commande();
		C.saisirCommandeAdmin(clients,produits);
		commandes.add(C);
	}
	
	public void ajouterCommandeClient(ListeClients clients,ListeProduits produits,Client client) {
		Commande C = new Commande();
		C.saisirCommandeClient(clients,produits,client);
		commandes.add(C);
	}
	
	public void ajouterListeCommandesAdmin(ListeClients clients,ListeProduits produits) {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le nombre de commandes : ");
		int nb = s.Entier();
		for(int i=0; i<nb; i++) {
			this.ajouterCommandeAdmin(clients,produits);
		}
	}
	
	public void ajouterListeCommandesClient(ListeClients clients,ListeProduits produits,Client client) {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le nombre de commandes : ");
		int nb = s.Entier();
		for(int i=0; i<nb; i++) {
			this.ajouterCommandeClient(clients,produits,client);
		}
	}
	
	public void modifierCommande(ListeClients clients,ListeProduits produits) {
		int i = this.rechercherCommande();
		if(i!=-1) {
			commandes.get(i).modifierCommande(clients, produits);
			System.out.println("\n Commande supprimée !");
		}
		else { System.out.println("\n Produit non trouvée !"); }
	}
	
	public void supprimerCommande() {
		int i = this.rechercherCommande();
		if(i!=-1) {
			commandes.remove(i);
			System.out.println("\n Commande supprimée !");
		}
		else { System.out.println("\n Produit non trouvée !"); }
	}
	
	public void afficherCommandesSatisfaites() {
		System.out.println("\n=================================================");
		System.out.println("\n Les commandes satisfaites :");
		for(int i=0; i<commandes.size();i++) {
			if(commandes.get(i).getEtat()==1) { commandes.get(i).afficher(); } 
		}
	}
	
	public void afficherCommandesReservees() {
		System.out.println("\n=================================================");
		System.out.println("\n Les commandes résérvées :");
		for(int i=0; i<commandes.size();i++) {
			if(commandes.get(i).getEtat()==2) { commandes.get(i).afficher(); } 
		}
	}
	
	public void afficherCommandesClient(Client client) {
		System.out.println("\n=================================================");
		System.out.println("\n Mes commandes :");
		for(int i=0; i<commandes.size();i++) {
			if(commandes.get(i).getClientC().equals(client)) { commandes.get(i).afficher(); } 
		}
	}
	
	public int rechercherCommande() {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le numéro de la commande : ");
		int temp = s.Entier();
		for(int i=0;i<commandes.size();i++) {
			if(temp == commandes.get(i).getNumeroC()) {
				return i;
			}
		}
		return -1;
	}
	
	public void achatsProduit() {
		System.out.println("\n Entrer la réference : ");
		String ref = s.String();
		System.out.println("\n\t DATE DE DEBUT : ");
		System.out.println("\n Entrer l'année : ");
		int anneeD = s.Entier();
		System.out.println("\n Entrer l e mois : ");
		int moisD = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourD = s.Jour(moisD);
		System.out.println("\n\t DATE DE FIN : ");
		System.out.println("\n Entrer l'année : ");
		int anneeF = s.Entier();
		System.out.println("\n Entrer l e mois : ");
		int moisF = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourF = s.Jour(moisF);
		
		for(int i=0;i<commandes.size();i++) {
			Commande c = commandes.get(i);
			if(c.compareDate(jourD, moisD, anneeD)>=0 && c.compareDate(jourF, moisF, anneeF)<=0) {
				for(int j=0;j<c.produitsC.size();j++) {
					if(ref.equals(c.produitsC.get(j).getProduit().getReference())) {
						System.out.println("\n----------------------------------");
						System.out.println("\n Numero de commande : " + c.getNumeroC() + "\n Date : " + c.toStringDate() + "\n Quantité : " + c.produitsC.get(j).getQuantite());
					}
				}
			}
		}
	}
	
	public void achatsProduitVille() {
		System.out.println("\n Entrer la réference : ");
		String ref = s.String();
		System.out.println("\n\t DATE DE DEBUT : ");
		System.out.println("\n Entrer l'année : ");
		int anneeD = s.Entier();
		System.out.println("\n Entrer le mois : ");
		int moisD = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourD = s.Jour(moisD);
		System.out.println("\n\t DATE DE FIN : ");
		System.out.println("\n Entrer l'année : ");
		int anneeF = s.Entier();
		System.out.println("\n Entrer le mois : ");
		int moisF = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourF = s.Jour(moisF);
		System.out.println("\n\n Entrer la Ville : ");
		String ville = s.String();
		
		for(int i=0;i<commandes.size();i++) {
			Commande c = commandes.get(i);
			if(c.compareDate(jourD, moisD, anneeD)>=0 && c.compareDate(jourF, moisF, anneeF)<=0 && c.getClientC().getAdresse().toLowerCase().contains(ville.toLowerCase())) {
				for(int j=0;j<c.produitsC.size();j++) {
					if(ref.equals(c.produitsC.get(j).getProduit().getReference())) {
						System.out.println("\n----------------------------------");
						System.out.println("\n Numero de commande : " + c.getNumeroC() + "\n Date : " + c.toStringDate() + "\n Quantité : " + c.produitsC.get(j).getQuantite());
					}
				}
			}
		}
	}
	
	public ArrayList<ProduitC> produitsDansUnePeriode() {
		System.out.println("\n\t DATE DE DEBUT : ");
		System.out.println("\n Entrer l'année : ");
		int anneeD = s.Entier();
		System.out.println("\n Entrer le mois : ");
		int moisD = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourD = s.Jour(moisD);
		System.out.println("\n\t DATE DE FIN : ");
		System.out.println("\n Entrer l'année : ");
		int anneeF = s.Entier();
		System.out.println("\n Entrer le mois : ");
		int moisF = s.Mois();
		System.out.println("\n Entrer le jour : ");
		int jourF = s.Jour(moisF);
		
		ArrayList<ProduitC> prods = new ArrayList<ProduitC>();
		
		for(int i=0;i<commandes.size();i++) {
			Commande c = commandes.get(i);
			if(c.compareDate(jourD, moisD, anneeD)>=0 && c.compareDate(jourF, moisF, anneeF)<=0) {
				for(int j=0;j<c.produitsC.size();j++) {
					boolean existe = false;
					for(int k=0;k<prods.size();k++) {
						if(c.produitsC.get(j).getProduit().equals(prods.get(k).getProduit())) {
							prods.get(k).ajouterQuantite(c.produitsC.get(j).getQuantite());
							existe = true;
						}
					}
					if(existe==false) {
						prods.add(new ProduitC(c.produitsC.get(j).getProduit(),c.produitsC.get(j).getQuantite()));
					}
				}
			}
		}
		return prods;
	}
	
	public void produitPlusCommercialise() {
		ArrayList<ProduitC> prods = this.produitsDansUnePeriode();
		
		ArrayList<ProduitC> prodPlusCom = new ArrayList<ProduitC>();
		prodPlusCom.add(prods.get(0));
		for(int i=1;i<prods.size();i++) {
			if(prods.get(i).getQuantite()>prodPlusCom.get(0).getQuantite())
			{
				prodPlusCom.removeAll(prodPlusCom);
				prodPlusCom.add(prods.get(i));
			}
			else {
			if(prods.get(i).getQuantite()==prodPlusCom.get(0).getQuantite())
				prodPlusCom.add(prods.get(i));
			}
		}
		System.out.println("\n====================================================================");
		System.out.println("\n Les produits les plus commercialisés sur cette période sont :");
		for(int i=0;i<prodPlusCom.size();i++) {
			prodPlusCom.get(i).afficher();
		}
	}
	
	public void produitMoinsCommercialise() {
		ArrayList<ProduitC> prods = this.produitsDansUnePeriode();
		if(prods.isEmpty()) { System.out.println("\n Aucune commande dans cette période !"); return;}
		ArrayList<ProduitC> prodMoinsCom = new ArrayList<ProduitC>();
		prodMoinsCom.add(prods.get(0));
		for(int i=1;i<prods.size();i++) {
			if(prods.get(i).getQuantite()<prodMoinsCom.get(0).getQuantite())
			{
				prodMoinsCom.removeAll(prodMoinsCom);
				prodMoinsCom.add(prods.get(i));
			}
			else {
			if(prods.get(i).getQuantite()==prodMoinsCom.get(0).getQuantite())
				prodMoinsCom.add(prods.get(i));
			}
		}
		System.out.println("\n====================================================================");
		System.out.println("\n Les produits les moins commercialisés sur cette période sont :");
		for(int i=0;i<prodMoinsCom.size();i++) {
			prodMoinsCom.get(i).afficher();
		}
	}
}
