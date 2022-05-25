#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

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
	if(voiture.louable == 1){
		printf("Excellent vous pouvez louer cette voiture !!\n Combien de temps voulez vous la louer (Vous pouvez la louer au maximum 72h) ?\n");
		scanf("%d",&t);}
		do{
			printf("Entrez un nombre entre 1 et 72 !!\n");
			scanf("%d",&t);
		}while(t <1 ||t >72);
	if(voiture.louable==0){
		printf("Dommage cette voiture est déja louée choisissez en une autre.\n");
		
	}
}

Voiture* lireFichier(){
	Voiture* tab = NULL;
	FILE* fichier = NULL;
	int* nbVoiture;
	int nmbLettre;
	fichier =fopen("carlist.txt","r");
	if (fichier == NULL){
		printf("Unable to open file\n");
		printf("Error code = %d\n",errno);
		printf("Error message = %s\n",strerror(errno));
		exit(1);
		}
		
		char ligneVoit[1000];
		while(fgets(ligneVoit, 999, fichier) != NULL){
			*nbVoiture = *nbVoiture +1;
		}
		tab = malloc(*nbVoiture * sizeof(Voiture));
		rewind(fichier);
		for(int i=0;i<*nbVoiture;i++){
			fscanf(fichier,"%s",tab[i].marque);
			fscanf(fichier,"%s",tab[i].modele);
			fscanf(fichier,"%d",&tab[i].prix);
			fscanf(fichier,"%d",&tab[i].place);
			fscanf(fichier,"%s",tab[i].boite);
			fscanf(fichier,"%d",&tab[i].louable);
		}
		return tab;
}


		
int main(){
	lireFichier();

	return 0;
}

