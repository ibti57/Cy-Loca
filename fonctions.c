#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char marque;
	char modele;
	int prix;
	int place;
	char boite;
	int louable;
}Voiture;


void init(Voiture* voitures, int n){
	Voiture voiture;
	int v;
	int t;
	printf("Veuillez entrer le numéro correspondant à la voiture que vous voulez louer ?\n");
	scanf("%d",&v);
	if(louable == 1){
		printf("Excellent vous pouvez louer cette voiture !!\n Combien de temps voulez vous la louer (Vous pouvez la louer au maximum 72h) ?\n");
		scanf("%d",&t);}
		do{
			printf("Entrez un nombre entre 1 et 72 !!\n");
			scanf("%d",&t);
		}while(t <1 ||t >72);
	if(louable==0){
		printf("Dommage cette voiture est déja louée choisissez en une autre.\n");
		
}
		
int main(){
	init();
	return 0;
}

	
