package Projet_A3marDarek;

public class Authentification {
	String usernameAdmin = new String("admin");
	String motdepasseAdmin = new String("admin");
	Lecture s = new Lecture();
	
	public void setUsernameAdmin(String username) { usernameAdmin = username; }
	public void setMotDePasseAdmin(String motdepasse) { motdepasseAdmin = motdepasse; }
	
	public String getUsernameAdmin() { return usernameAdmin; }
	public String getMotDePasseAdmin() { return motdepasseAdmin; }
	
	public void changerIdantifiantsAdmin() {
		System.out.println("\n==============================================");
		System.out.println("\n Entrer le nouveau username : ");
		this.setUsernameAdmin(s.String());
		System.out.println("\n Entrer le nouveau mot de passe : ");
		this.setMotDePasseAdmin(s.String());
		System.out.println("\n Les identifiants admin ont été changé !");
	}
	
	public Client verifierIdentifiants(ListeClients clients, String username, String motdepasse) {
		for(int i=0;i<clients.clients.size();i++) {
			if(clients.clients.get(i).getUsername().equals(username) && clients.clients.get(i).getPassword().equals(motdepasse)) {
				return clients.clients.get(i);
			}
		}
		return null;
	}
	
	public void Login(ListeProduits produits, ListeCommandes commandes, ListeClients clients) {
		int run=1;
		while(run==1) {
			System.out.println("\n - - - - - - - - - - - - - - - - - - - - -");
			System.out.print("\n Username : ");
			String username = s.String().toLowerCase();
			System.out.print("\n Mot de passe :");
			String motdepasse = s.String();
			System.out.println("\n - - - - - - - - - - - - - - - - - - - - -");
			if(username.equals(usernameAdmin) && (motdepasse.equals(motdepasseAdmin))) { //user = admin
				Menu.MenuAdmin(produits,commandes,clients,this);
				run = Deconnexion();
			}
			else { //user = client
				Client client = this.verifierIdentifiants(clients, username, motdepasse);
				if(client!=null) {
					Menu.MenuClient(produits, commandes, clients, client);
					run = Deconnexion();
				}
			else {
				System.out.println("\n Identifiants incorrectes !");
				}
			}
		}
	}
	
	public int Deconnexion () {
		while(true) {
			System.out.println("\n\n 1) Déconnecter.\n 2) Quitter.\n ");
			switch(s.Entier()) {
				case 1:
					return 1;
				
				case 2:
					return 0;
					
				default:
					Affichage.ChoixInconnu();
			}
		}
	}
}
