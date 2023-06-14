package Projet_A3marDarek;

import java.util.ArrayList;

public class Client {
	private String username;
	private String password;
	private String nomClient;
	private String prenomClient;
	private String adresse;
	private CompteFidelite compteFid;
	private Lecture s = new Lecture();
	
	public Client() {
		this("","","","","");
	}
	
	public Client(String username, String passwd, String nom, String prenom, String adresse) {
		this.username = username;
		password = passwd;
		nomClient = nom;
		prenomClient = prenom;
		this.adresse = adresse;
		compteFid = new CompteFidelite();
	}
	
	public void setUsername(String username) { this.username = username; }
	public void setPassword(String passwd) { password = passwd; }
	public void setNomClient(String nom) { nomClient = nom; }
	public void setPrenomClient(String prenom) { prenomClient = prenom; }
	public void setAdresse(String adresse) { this.adresse = adresse; }
	public void setCompteFid(int nbr, float m1, float m2, float m3) { compteFid.setNombreProduits(nbr); compteFid.setMontantIM(m1); compteFid.setMontantEE(m2); compteFid.setMontantKS(m3); }
	
	
	public String getUsername() { return username; }
	public String getPassword() { return password; }
	public String getNomClient() { return nomClient; }
	public String getPrenomClient() { return prenomClient; }
	public String getAdresse() { return adresse; }
	public CompteFidelite getCompteFid() { return compteFid; }

	
	public void afficher() {
		System.out.println(toString() + "\n Username : " + username);
	}
	
	public String toString() {
		return "\n Nom : " + nomClient + "\n Prénom : " + prenomClient + "\n Adresse : " + adresse ;
	}
	
	public void saisirClient(ArrayList<Client> clients) {
		System.out.println("\n=================================================");
		System.out.println("\n Nom du client : ");
		
		nomClient = s.String();
		System.out.println("\n Prenom du client : ");
		prenomClient = s.String();
		System.out.println("\n Adresse du client : ");
		adresse = s.String();
		System.out.println("\n Username du client : ");
		int run = 1;
		int existe = 0;
		while(run==1) {
			username = s.String().toLowerCase(); //pour gerer le case ou username1= "user1" et ussername2 = "User1" (unacceptable)
			for(int i=0; i<clients.size(); i++) {
				if (username.equals(clients.get(i).getUsername())) { existe = 1; }
			}
			if(existe == 1) {
				System.out.println("\n Ce username existe déjà ! Veuillez entre un autre : ");
			}
			else { run = 0; }
		}
		System.out.println("\n Mot de passe : ");
		password = s.String();	
	}
	
	public void modifierClient() {
		Affichage.ModifierClient();
		
		switch(s.Entier()) {
			case 0:
				System.out.println("\n Le client n'a pas été modifié !");
				break;
						
			case 1:
				Affichage.ModifierValeur();
				nomClient = s.String();
				System.out.println("\n Le client a été modifié !");
				break;
				
			case 2:
				Affichage.ModifierValeur();
				prenomClient = s.String();
				System.out.println("\n Le client a été modifié !");
				break;
				
			case 3:
				Affichage.ModifierValeur();
				adresse = s.String();
				System.out.println("\n Le client a été modifié !");
				break;
				
			case 4:
				Affichage.ModifierValeur();
				password = s.String();
				System.out.println("\n Le client a été modifié !");
				break;
				
			case 5:
				Affichage.ModifierValeur();
				compteFid.modifierCompteFidelite();
				System.out.println("\n Le client a été modifié !");
				break;
			
			default:
				Affichage.ChoixInconnu();		
		}		
	}	
}
