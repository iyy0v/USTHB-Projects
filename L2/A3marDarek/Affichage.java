package Projet_A3marDarek;

public class Affichage {
	public static void MenuPrincipalAdmin() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU :\n 1) Gestion des Produits.\n 2) Gestion des Commandes.\n 3) Gestion des Clients.\n 4) Modifier les identifiants admin.\n 0) Quitter.\n\n Entrer le nombre correspondant � votre choix : ");
	}
	public static void MenuPrincipalClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU :\n 1) Afficher les produits dans le stock.\n 2) Ajouter une commande.\n 3) Ajouter une liste de commandes.\n 4) Afficher mes commandes.\n 0) Quitter.\n\n Entrer le nombre correspondant � votre choix : ");
	}
	public static void MenuProduit() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU PRODUIT :\n 1) Cr�er une liste des produits.\n 2) Ajouter un produit.\n 3) Modifier un produit.\n 4) Supprimer un produit.\n 5) Afficher la liste des produits.\n 0) Quitter.\n\n Entrer le nombre correspondant � votre choix : ");
	}
	public static void MenuCommande() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU COMMANDE :\n 1) Cr�er une liste des commandes.\n 2) Ajouter une commande.\n 3) Modifier une commande.\n 4) Supprimer une commande.\n 5) Afficher la liste des commandes satisfaites.\n 6) Afficher la liste des commandes en instance.\n 7) Afficher le produit le plus commercialis� sur une p�riode donn�e.\n 8) Afficher le produit le moins commercialis� sur une p�riode donn�e.\n 9) Achats d'un produit donn� sur une p�riode donn�e.\n 10) Achats d'un produit donn� sur une p�riode donn�e, par ville.\n 0) Quitter.\n\n Entrer le nombre correspondant � votre choix : ");
	}
	public static void MenuClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU CLIENT :\n 1) Cr�er une liste des clients.\n 2) Ajouter un client.\n 3) Modifier un client.\n 4) Supprimer un client.\n 5) Afficher la liste des clients\n 6) Afficher l'�tat du compte fid�lit� d'un client.\n 7) Afficher l'�tat du compte fid�lit� de tous les clients.\n 8) Modifier les montants necessaires pour les remises.\n 0) Quitter.\n\n Entrer le nombre correspondant � votre choix : ");
	}
	public static void ChoixInconnu() {
		System.out.println("\n Choix inconnu !\n");
	}
	public static void ModifierProduit() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER PRODUIT :\n 1) Modifier le nom du produit.\n 2) Modifier la cat�gorie du produit.\n 3) Modifier la r�f�rence du produit.\n 4) Modifier la d�scriptif du produit.\n 5) Modifier les caract�restiques techniques du produit.\n 6) Modifier le prix du produit.\n 7) Modifier la quantit� du produit.\n 0) Retourner.\n\n Entrer le nombre correspondant � votre choix : ");	
	}
	public static void ModifierCommande() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER COMMANDE :\n 1) Modifier le client.\n 2) Modifier les produits de la commandes.\n 3) Modifier la date de la commande.\n 4) Modifier l'�tat de la commande.\n 0) Retourner.\n\n Entrer le nombre correspondant � votre choix : ");	
	}
	public static void ModifierClient() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MODIFIER CLIENT :\n 1) Modifier le nom du client.\n 2) Modifier le pr�nom du client.\n 3) Modifier l'adresse du client.\n 4) Modifier le mot de passe.\n 5) Modifier le compte de fid�lit� du client.\n 0) Retourner.\n\n Entrer le nombre correspondant � votre choix : ");	
	}
	public static void ModifierCompteFidelite() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU COMPTE FID�LIT� DU CLIENT :\n 1) Modifier le nombre du produits achet�s.\n 2) Modifier le montant d'achats des produits informatiques et mobiles.\n 3) Modifier le montant d'achats des produits �lectronique et �lectrom�nager.\n 4) Modifier le montant d'achats des kits solaires.\n 0) Retourner.\n\n Entrer le nombre correspondant � votre choix : ");	
	}
	public static void ModifierMontantRemise() {
		System.out.println("\n==========================================================================");
		System.out.print("\nMENU MONTANT POUR REMISE :\n 1) Modifier le montant necessaire pour la remise des produits informatiques et mobiles.\n 2) Modifier le montant necessaire pour la remise des produits �lectroniques et �lectrom�nager.\n 3) Modifier le montant necessaire pour la remise des kits solaires.\n 0) Retourner.\n\n Entrer le nombre correspondant � votre choix : ");	
	}
	public static void ModifierValeur() {
		System.out.print("\n Entrer la nouvelle valeur : ");
	}

}
