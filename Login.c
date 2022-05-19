#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME "name"
#define PASS "password"
#define ENTER 13
#define BACKSPACE 8

int main(){
	char c,nom[20],mdp[20],chaine[20];
	int nb,i;
	do 
	{ 
		printf("Nom d'utilisateur : ");
		scanf("%s",nom);
		if(strcmp(nom,NAME)!=0)
		{
			printf("Nom d'utilisateur invalide !\n");
			getchar();
		}
	}while(strcmp(nom,NAME)!=0);
	do 
	{
		printf("Mot de passe : ");
		nb=0;
		while(c=getchar()!=ENTER){
			if(c!=BACKSPACE && nb<20){
				chaine[nb]=c;
				nb++;
				printf("*");
			}
			else
			{
				if(nb>0)
				{
				//Pour gérer l'effacement 
				nb--;
				chaine[nb]='\0';
				}
			}
		}
		//On copie les caractères du mot de passe qui ont été mis dans la chaine 
		for(i=0;i<nb;i++){
			mdp[i]= chaine[i];
		}
		mdp[i]='\0'; //On indique ici le caractère de fin de ligne 
		if(strcmp(mdp,PASS)!=0){
			printf("\nMot de passe invalide \a\n");
			}
	}while(strcmp(mdp,PASS)!=0);
	
	return 0;
}
			
			
