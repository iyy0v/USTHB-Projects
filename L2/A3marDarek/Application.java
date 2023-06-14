package Projet_A3marDarek;

import java.io.File;
import java.io.FileNotFoundException; 
import java.io.IOException; 
import java.util.Scanner;
import java.util.StringTokenizer;

public class Application {
	
	public static void LireFichiers(ListeProduits produits,ListeCommandes commandes,ListeClients clients) throws FileNotFoundException {
		try {//POUR TRAITER LES EXCEPTIONS
			StringTokenizer t;
			//changer le directory du fichier d'executer le programme pour la premiere fois
			File FProduits = new File("C:\\Users\\Ayoub Nait Mihoub\\Documents\\School\\POO\\Java\\POO TD+TP\\src\\Projet_A3marDarek\\Produits.txt");
			Scanner s = new Scanner(FProduits);
			while(s.hasNext()) {
				String temp = s.nextLine();
				t = new StringTokenizer(temp,"/");
				Produit p = new Produit();
				p.setNomProd(t.nextToken());
				p.setCategorie(CategorieP.values()[Integer.parseInt(t.nextToken())-1]);
				p.setReference(t.nextToken());
				p.setDescriptif(t.nextToken());
				p.setCaracTech(t.nextToken());
				p.setPrix(Double.parseDouble(t.nextToken()));
				p.setQuantite(Integer.parseInt(t.nextToken()));
				produits.produits.add(p);
			}
			s.close();
			//changer le directory du fichier d'executer le programme pour la premiere fois
			File FClients = new File("C:\\Users\\Ayoub Nait Mihoub\\Documents\\School\\POO\\Java\\POO TD+TP\\src\\Projet_A3marDarek\\Clients.txt");
			s = new Scanner(FClients);
			while(s.hasNext()) {
				String temp = s.nextLine();
				t = new StringTokenizer(temp,"/");
				Client c = new Client();
				c.setUsername(t.nextToken());
				c.setPassword(t.nextToken());
				c.setNomClient(t.nextToken());
				c.setPrenomClient(t.nextToken());
				c.setAdresse(t.nextToken());
				c.setCompteFid(Integer.parseInt(t.nextToken()),Float.parseFloat(t.nextToken()),Float.parseFloat(t.nextToken()),Float.parseFloat(t.nextToken()));
				clients.clients.add(c);
			}
			s.close();
		}
		catch (IOException e) { 
			System.out.println("Une erreur s'est produite : Fichiers introuvables !");
			e.printStackTrace();
		}
	}
	
	public static void main(String[] args) throws FileNotFoundException {
		
		ListeProduits produits = new ListeProduits();
		ListeCommandes commandes = new ListeCommandes();
		ListeClients clients = new ListeClients();	
		Authentification authentificateur = new Authentification();
		
		System.out.println("\n Bienvenue à A3marDarek !");
		
		/* REGLER LA FONCTION AVANT DE LA UTILISER !
		LireFichiers(produits, commandes, clients);
		*/
		
		authentificateur.Login(produits, commandes, clients);

		System.out.println("\n Au revoir !\n\n Projet de NAIT MIHOUB Ayoub\n");
		
	} 
}
