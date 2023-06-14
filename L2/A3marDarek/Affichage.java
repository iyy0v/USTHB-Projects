package Projet_A3marDarek;

public class Affichage {
	public static void MenuPrincipalAdmin() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU :\n 1) Gestion des Produits.\n 2) Gestion des Commandes.\n 3) Gestion des Clients.\n 4) Modifier les identifiants admin.\n 0) Quitter.\n\n Entrer le nombre correspondant à votre choix : ");
	}
	public static void MenuPrincipalClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU :\n 1) Afficher les produits dans le stock.\n 2) Ajouter une commande.\n 3) Ajouter une liste de commandes.\n 4) Afficher mes commandes.\n 0) Quitter.\n\n Entrer le nombre correspondant à votre choix : ");
	}
	public static void MenuProduit() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU PRODUIT :\n 1) Créer une liste des produits.\n 2) Ajouter un produit.\n 3) Modifier un produit.\n 4) Supprimer un produit.\n 5) Afficher la liste des produits.\n 0) Quitter.\n\n Entrer le nombre correspondant à votre choix : ");
	}
	public static void MenuCommande() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU COMMANDE :\n 1) Créer une liste des commandes.\n 2) Ajouter une commande.\n 3) Modifier une commande.\n 4) Supprimer une commande.\n 5) Afficher la liste des commandes satisfaites.\n 6) Afficher la liste des commandes en instance.\n 7) Afficher le produit le plus commercialisé sur une période donnée.\n 8) Afficher le produit le moins commercialisé sur une période donnée.\n 9) Achats d'un produit donné sur une période donnée.\n 10) Achats d'un produit donné sur une période donnée, par ville.\n 0) Quitter.\n\n Entrer le nombre correspondant à votre choix : ");
	}
	public static void MenuClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU CLIENT :\n 1) Créer une liste des clients.\n 2) Ajouter un client.\n 3) Modifier un client.\n 4) Supprimer un client.\n 5) Afficher la liste des clients\n 6) Afficher l'état du compte fidélité d'un client.\n 7) Afficher l'état du compte fidélité de tous les clients.\n 8) Modifier les montants necessaires pour les remises.\n 0) Quitter.\n\n Entrer le nombre correspondant à votre choix : ");
	}
	public static void ChoixInconnu() {
		System.out.println("\n Choix inconnu !\n");
	}
	public static void ModifierProduit() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER PRODUIT :\n 1) Modifier le nom du produit.\n 2) Modifier la catégorie du produit.\n 3) Modifier la référence du produit.\n 4) Modifier la déscriptif du produit.\n 5) Modifier les caractérestiques techniques du produit.\n 6) Modifier le prix du produit.\n 7) Modifier la quantité du produit.\n 0) Retourner.\n\n Entrer le nombre correspondant à votre choix : ");	
	}
	public static void ModifierCommande() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER COMMANDE :\n 1) Modifier le client.\n 2) Modifier les produits de la commandes.\n 3) Modifier la date de la commande.\n 4) Modifier l'état de la commande.\n 0) Retourner.\n\n Entrer le nombre correspondant à votre choix : ");	
	}
	public static void ModifierClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER CLIENT :\n 1) Modifier le nom du client.\n 2) Modifier le prénom du client.\n 3) Modifier l'adresse du client.\n 4) Modifier le mot de passe.\n 5) Modifier le compte de fidélité du client.\n 0) Retourner.\n\n Entrer le nombre correspondant à votre choix : ");	
	}
	public static void ModifierCompteFidelite() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU COMPTE FIDÉLITÉ DU CLIENT :\n 1) Modifier le nombre du produits achetés.\n 2) Modifier le montant d'achats des produits informatiques et mobiles.\n 3) Modifier le montant d'achats des produits électronique et électroménager.\n 4) Modifier le montant d'achats des kits solaires.\n 0) Retourner.\n\n Entrer le nombre correspondant à votre choix : ");	
	}
	public static void ModifierMontantRemise() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MONTANT POUR REMISE :\n 1) Modifier le montant necessaire pour la remise des produits informatiques et mobiles.\n 2) Modifier le montant necessaire pour la remise des produits électroniques et électroménager.\n 3) Modifier le montant necessaire pour la remise des kits solaires.\n 0) Retourner.\n\n Entrer le nombre correspondant à votre choix : ");	
	}
	public static void ModifierValeur() {
		System.out.print("\n Entrer la nouvelle valeur : ");
	}

}
