package Projet_A3marDarek;

import java.util.ArrayList;

public class ListeClients {
	ArrayList<Client> clients;
	private Lecture s = new Lecture();
	
	
	public ListeClients() {
		clients = new ArrayList<Client>();
	}
	
	public ListeClients(ArrayList<Client> clients) {
		this.clients = new ArrayList<Client>(clients);
	}
	
	
	public Client getClient(int i) {
		if(i>=0) { return clients.get(i); }
		else { return null; }
	}
	
	public void ajouterClient() {
		Client c = new Client();
		c.saisirClient(clients);
		clients.add(c);
	}
	
	public void ajouterListeClients() {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le nombre de clients : ");
		int nb = s.Entier();
		for(int i=0; i<nb; i++) {
			this.ajouterClient();
		}
	}
	
	public void modifierClient() {
		int i=this.rechercherClient();
		if(i!=-1) {
			clients.get(i).modifierClient();
		}
		else {
			System.out.println("\n Client non trouvé !");
		}
	}
	
	public void supprimerClient() {
		int i=this.rechercherClient();
		if(i!=-1) {
			clients.remove(i);
			System.out.println("\n Le client a été supprimé !");
		}
		else {
			System.out.println("\n Client non trouvé !");
		}
	}
	
	public void afficherClients() {
		for(int i=0; i<clients.size(); i++) {
			System.out.println("\n - - - - - - - - - - - - - - -");
			clients.get(i).afficher();
		}
	}
	
	public void afficherEtatsComptesFidelites() {
		for(int i=0; i<clients.size(); i++) {
			System.out.println("\n - - - - - - - - - - - - - - -");
			System.out.println("\n Client : " + clients.get(i).getNomClient() + " " + clients.get(i).getPrenomClient() + "\n Adresse : " + clients.get(i).getAdresse());
			clients.get(i).getCompteFid().afficher();
		}
	}
	
	public void afficherEtatCompteFidelite() {
		int i=this.rechercherClient();
		if(i!=-1) {
			clients.get(i).getCompteFid().afficher();
		}
		else {
			System.out.println("\n Client non trouvé !");
		}
	}
	
	public int rechercherClient() {
		System.out.println("\n=================================================");
		System.out.println("\n\n Entrer le username du client : ");
		String username = s.String();
		for(int i=0; i<clients.size(); i++) {
			if(username.equals(clients.get(i).getUsername())) { 
				return i;
			}
		}
		return -1;
	}
}
