package Projet_A3marDarek;

import java.time.LocalDateTime;
import java.util.ArrayList;


public class Commande {
	private final int numeroC;
	private Client clientC;
	ArrayList<ProduitC> produitsC = new ArrayList<ProduitC>();
	private int DateJ;
	private int DateM;
	private int DateA;
	private int Etat;
	private static int nombreC = 0;
	private double prixC = 0;
	
	private Lecture s = new Lecture();
	
	public Commande() {
		this(null,new ArrayList<ProduitC>(),0,0,0,0,0);
	}
	
	public Commande(Client client, ArrayList<ProduitC> produits, int jour, int mois, int annee, int etat, double prix) {
		numeroC = nombreC+1; //commence de 1
		clientC = client;
		produitsC = produits;
		DateJ = jour;
		DateM = mois;
		DateA = annee;
		Etat = etat;
		prixC = prix;
		nombreC ++;
	}
	
	
	public void setClientC(Client client) { clientC = client; }
	public void setProduitsC(ArrayList<ProduitC> produits) { produitsC = produits; }
	public void setDateJ(int jour) { DateJ = jour; }
	public void setDateM(int mois) { DateM = mois; }
	public void setDateA(int annee) { DateA = annee; }
	public void setEtat(int etat) { Etat = etat; }
	public void setPrixC(double prix) { prixC = prix; }
	
	public int getNumeroC() { return numeroC; }
	public Client getClientC() { return clientC; }
	public ArrayList<ProduitC> getProduitsC() { return produitsC; }
	public int getDateJ() { return DateJ; }
	public int getDateM() { return DateM; }
	public int getDateA() { return DateA; }
	public int getEtat() { return Etat; }
	public double getPrixC() { return prixC; }
	
	
	public void afficher() {
		System.out.println(this.toString());
		for(int i = 0; i < produitsC.size(); i++) {
				produitsC.get(i).afficher();
				System.out.println("\n - - - - - - - - - - - - -");
		}
	}
	
	public String toString() {
		return "\n Numero commande: " + numeroC + "\n\n Client : " + clientC.getNomClient() + " " + clientC.getPrenomClient() + "\n Date : " + this.toStringDate() + "\n Prix total : " + prixC +"\n\n PRODUITS :";
	}
	
	public String toStringDate() {
		return DateJ + "/" + DateM + "/" + DateA;
	}
	
	public void saisirCommandeAdmin(ListeClients clients, ListeProduits produits) {
		int i = clients.rechercherClient();
		if(i == -1) {
			System.out.println("\n Ce client n'existe pas ! Voulez vous le créer ? \n 1) Oui.\n 2) Non.");
			int run = 1;
			while(run==1) {
				switch(s.Entier()) {
				case 1: 
					clients.ajouterClient();
					clientC = clients.getClient(clients.clients.size()-1);
					this.saisirCommandePartie(produits);
					run=0;
					break;
				
				case 2:
					System.out.println("\n Création de la commande a été annulé !");
					run=0;
					break;
					
				default:
					Affichage.ChoixInconnu();
				}
			}
		}
		else {
			clientC = clients.getClient(i);
			this.saisirCommandePartie(produits);
		}
	}
	
	public void saisirCommandeClient(ListeClients clients, ListeProduits produits, Client client) {
			clientC = client;
			this.saisirCommandePartie(produits);
	}
	
	public void saisirCommandePartie(ListeProduits produits) {
		System.out.println("\n Nombre de produits : ");
		int n = s.Entier();
		for(int i=0; i<n; i++) {
			ProduitC p = new ProduitC();
			int j = produits.rechercherProduit();
			if(j == -1) {
				System.out.println("\n Produit introuvable !\n");
				i--;
			}
			else {
				p.setProduit(produits.getProduit(j));
				do {
				System.out.println("\n Entrer la quantité : ");
				p.setQuantite(s.EntierS(0));
				if(p.getQuantite()>produits.getProduit(i).getQuantite()) { System.out.println("\n Quantité dispo : " + produits.getProduit(i).getQuantite());}
				} while(p.getQuantite()>produits.getProduit(i).getQuantite());
				produits.getProduit(i).setQuantite(produits.getProduit(i).getQuantite() - p.getQuantite()); //Quantité du stock - quantité commandée 
				produitsC.add(p);
			}
		}
		
		LocalDateTime date = LocalDateTime.now();
		DateA = date.getYear();
		DateM = date.getMonthValue();
		DateJ = date.getDayOfMonth();
		
		do {
			System.out.println("\n Choisir l'état de la commande :\n 1) Commande satisfaite.\n 2) Commande en instance (réservée).");
			Etat = s.Entier();
		}while((Etat<0) || (Etat>3));
		
		this.calculerPrix();
	}
	
	public void calculerPrix() {
		double montantIM=0;
		double montantEE=0;
		double montantKS=0;
		for(int i=0;i<produitsC.size();i++) {
			switch(produitsC.get(i).getProduit().getCategorie()) {
			case ProduitMobile:
			case ProduitInformatique:
				montantIM = produitsC.get(i).getProduit().getPrix() * produitsC.get(i).getQuantite();
				break;
				
			case ProduitÉlectronique:
			case ProduitÉlectroménager:
				montantEE = produitsC.get(i).getProduit().getPrix() * produitsC.get(i).getQuantite();
				break;
				
			case KitSolaire:
				montantKS = produitsC.get(i).getProduit().getPrix() * produitsC.get(i).getQuantite();
				break;
			}
			clientC.getCompteFid().incrementerNombreProduits(1);
		}
		// verifier et faire les remises
		if(clientC.getCompteFid().getMontantIM()>=clientC.getCompteFid().getMontantRemiseIM()) {
			clientC.getCompteFid().ajouterMontantIM(montantIM);
			montantIM = montantIM - (clientC.getCompteFid().getMontantIM()*5/100);
			clientC.getCompteFid().setMontantIM(0);
		}
		if(clientC.getCompteFid().getMontantEE()>=clientC.getCompteFid().getMontantRemiseEE()) {
			clientC.getCompteFid().ajouterMontantEE(montantEE);
			montantEE = montantEE - (clientC.getCompteFid().getMontantEE()*10/100);
			clientC.getCompteFid().setMontantEE(0);
		}
		if(clientC.getCompteFid().getMontantKS()>=clientC.getCompteFid().getMontantRemiseKS()) {
			clientC.getCompteFid().ajouterMontantKS(montantKS);
			montantKS = montantKS - (clientC.getCompteFid().getMontantKS()*15/100);
			clientC.getCompteFid().setMontantKS(0);
		}
		prixC = montantIM + montantEE + montantKS;	
	}
	
	public void modifierCommande(ListeClients clients,ListeProduits produits) {
		Affichage.ModifierCommande();
		clientC.getCompteFid().incrementerNombreProduits(-produitsC.size()); //substituer le nombre de produits pour l'ajouter apres
		switch(s.Entier()) {
		case 0:
			System.out.println("\n La commande n'a pas été modifié !");
			break;		
		case 1:
			int i = clients.rechercherClient();
			if(i == -1) {
				System.out.println("\n Ce client n'existe pas ! Voulez vous le créer ? \n 1) Oui.\n 2) Non.");
				int run = 1;
				while(run==1) {
					switch(s.Entier()) {
					case 1: 
						clients.ajouterClient();
						clientC = clients.getClient(i);
						run=0;
						break;
					
					case 2:
						System.out.println("\n Modification de la commande a été annulé !");
						run=0;
						break;
						
					default:
						Affichage.ChoixInconnu();
					}
				}
			}
			else {
				clientC = clients.getClient(i);
			}
			System.out.println("\n La commande a été modifié !");
			break;
			
		case 2:
			System.out.println("\n Nombre de produits : ");
			int n = s.Entier();
			for(i=0; i<n; i++) {
				ProduitC p = new ProduitC();
				int j = produits.rechercherProduit();
				if(j == -1) {
					System.out.println("\n Produit introuvable !\n");
					i--;
				}
				else {
					p.setProduit(produits.getProduit(j));
					
					System.out.println("\n Entrer la quantité : ");
					p.setQuantite(s.EntierS(0));
					produitsC.add(p);
				}
			}	
			System.out.println("\n La commande a été modifié !");
			break;
			
		case 3:
			System.out.println("\n Entrer l'année : ");
			DateA = s.EntierS(0);
			System.out.println("\n Entrer le mois : ");
			DateM = s.Mois();
			System.out.println("\n Entrer le jour : ");
			DateJ = s.Jour(DateM);
			System.out.println("\n La commande a été modifié !");
			break;
			
		case 4:
			do {
				System.out.println("\n Choisir l'état de la commande :\n 1) Commande satisfaite.\n 2) Commande en instance (réservée).");
				Etat = s.Entier();
			}while((Etat<0) || (Etat>1));
			System.out.println("\n La commande a été modifié !");
			break;
		
		default:
			Affichage.ChoixInconnu();		
		}
		this.calculerPrix();
	}
	
	public int compareDate(int jour,int mois,int annee) {
		if(annee>DateA) { return -1; }
		else {
		if(annee<DateA) { return 1; }
		else { //annee == DateA
			if(mois>DateM) { return -1; }
			else {
			if(mois<DateM) { return 1; }
			else { //mois == DateM
				if(jour>DateJ) { return -1; }
				else {
				if(jour<DateJ) { return 1; }
				else { return 0; } //jour == DateJ
				}	
			}
			}
		}
		}
	}
	
}
