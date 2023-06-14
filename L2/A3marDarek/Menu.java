package Projet_A3marDarek;

public class Menu {
	
	
	public static void MenuAdmin(ListeProduits produits, ListeCommandes commandes, ListeClients clients, Authentification admin) {
		Lecture s = new Lecture();
		int run = 1;
		while(run == 1) {
			Affichage.MenuPrincipalAdmin();
			int run1 = 1;
			switch(s.Entier()) {
				case 1:
					while(run1 == 1) { 
						Affichage.MenuProduit();
						switch(s.Entier()) {
							case 1:
								produits.ajouterListeProduits();
								break;
							
							case 2:
								produits.ajouterProduit();
								break;
							
							case 3:
								produits.modifierProduit();
								break;
							
							case 4:
								produits.supprimerProduit();
								break;
							
							case 5:
								produits.afficherProduits();
								break;
								
							case 0:
								run1 = 0; 
								break;
							
							default:
								Affichage.ChoixInconnu();
								break;
						}
					}
					
					break;
				
				case 2:
					while(run1 == 1) { 
						Affichage.MenuCommande();
						switch(s.Entier()) {
							case 1:
								commandes.ajouterListeCommandesAdmin(clients, produits);
								break;
							
							case 2:
								commandes.ajouterCommandeAdmin(clients, produits);
								break;
							
							case 3:
								commandes.modifierCommande(clients, produits);
								break;
							
							case 4:
								commandes.supprimerCommande();
								break;
							
							case 5:
								commandes.afficherCommandesSatisfaites();
								break;
								
							case 6:
								commandes.afficherCommandesReservees();
								break;
								
							case 7:
								commandes.produitPlusCommercialise();
								break;
								
							case 8:
								commandes.produitMoinsCommercialise();
								break;
								
							case 9:
								commandes.achatsProduit();
								break;
								
							case 10:
								commandes.achatsProduitVille();
								break;
								
							case 0:
								run1 = 0;
								break;
							
							default:
								Affichage.ChoixInconnu();
								break;
						}
					}
					break;
					
				case 3:
					while(run1 == 1) { 
						Affichage.MenuClient();
						switch(s.Entier()) {
							case 1:
								clients.ajouterListeClients();
								break;
							
							case 2:
								clients.ajouterClient();
								break;
							
							case 3:
								clients.modifierClient();
								break;
							
							case 4:
								clients.supprimerClient();
								break;
							
							case 5:
								clients.afficherClients();
								break;
								
							case 6:
								clients.afficherEtatCompteFidelite();
								break;
								
							case 7:
								clients.afficherEtatsComptesFidelites();
								break;
								
							case 8:
								CompteFidelite.modifierMontantRemise();
								break;
								
							case 0:
								run1 = 0;
								break;
							
							default:
								Affichage.ChoixInconnu();
								break;
						}
					}
					break;
					
				case 4:
					admin.changerIdantifiantsAdmin();
					break;
					
				case 0:
					run = 0;
					break;
				
				default:
					Affichage.ChoixInconnu();
			}
		}
	}
	
	public static void MenuClient(ListeProduits produits, ListeCommandes commandes, ListeClients clients, Client user) {
		Lecture s = new Lecture();
		int run = 1;
		while(run == 1) {
			Affichage.MenuPrincipalClient();
			switch(s.Entier()) {
				case 1:
					produits.afficherProduitsDispo();
					break;
				
				case 2:
					commandes.ajouterCommandeClient(clients,produits,user);
					break;
					
				case 3:
					commandes.ajouterListeCommandesClient(clients,produits,user);
					break;
				
				case 4:
					commandes.afficherCommandesClient(user);
					break;
					
				case 0:
					run = 0;
					break;
				
				default:
					Affichage.ChoixInconnu();
			}
		}
	}
}
