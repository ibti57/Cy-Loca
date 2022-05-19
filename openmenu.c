#include <stdio.h>
#include <stdlib.h>

int menu(){
    int choix;
    char login,mdp;
 	do{
 	    printf("1.Se connecter \n2.Créer un compte\n");
 	    scanf("%d",&choix);
 	    switch(choix){
            case 1: // Connexion
 	            printf("Login :\n");
 	            scanf("%s",&login);
 	            printf("Mot de passe :\n");
 	            scanf("%s",&mdp);
            break;
 	        case 2: // Créer un compte
 	            printf("Nous allons vous demander quelques informations.");
 	        break;
 	        default:
 	            printf("Veuilez entrer un chiffre entre 1 et 2 .\n");
 	            break;
 	    }
    }while(choix != 2);
    printf("            Bienvenu %s           ",&login);
    printf("Vous avez emprunté cette voiture :\n");
    ///Mettre la fonction des actions 
}

int main(){
    menu();
    
    return 0;
}
    

