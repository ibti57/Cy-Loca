#include <stdio.h>
#include <stdlib.h>

/*This structure is the typical structure of a car with its brand, model, price, number of seats and if it is rentable
*/
typedef struct Car{
	int num;
	char mark[50];
	char model[50];
	int price;
	int place;
	int commendable;
}Car;

/*The history() fonction allows you to display the history of the cars it is used in the customer interface and in the manager interface
*/
int history(){
	FILE *f;
	char c;
	f=fopen("carlist.txt","rt");//to open the text file 
	while((c=fgetc(f))!=EOF){
		printf("%c",c);//display the text
	}
	fclose(f);// close the text file
}

/*The Add() function allows managers to add a car to their rental agency
She therefore asks the manager for all the characteristics of a car, its brand, model, price and number of seats.
*/

int Add(){
	FILE *f;
	Car c;
	f = fopen("carlist.txt","a");//open the text file and if it doesn't exist it creates one
	if (f != NULL){
		printf("Entrez le numéro de la voiture que vous voulez ajouter :\n");//we ask her the caracteristics of the car
		scanf("%d",&c.num);
		printf("Entrez la marque de la voiture :\n");
		scanf("%s",c.mark);
		printf("Entrez le modèle de la voiture :\n");
		scanf("%s",c.model);
		printf("Entrez le prix par heure de la voiture :\n");
		scanf("%d",&c.price);
		printf("Entrez le nombre de place de la voiture (4 ou 5) :\n");
		scanf("%d",&c.place);
		printf("Est-ce que la voiture est disponible ? (1 pour oui/ 0 pour nn)\n");
		scanf("%d",&c.commendable);
		fprintf(f,"%d %s %s %d %d %d\n",c.num,c.mark,c.model,c.price,c.place,c.commendable);//this line allows us to enter all the characteristics in our text file


	}
}

/*
The rent() function allows to rent a car, we first display the history of the cars then we ask the user to enter the number of the car he wishes to rent if in the structure of the car the commendable is equal to 0 then the car is already rented if it is equal to 1 then he can rent it, we will therefore set the commendable of this car to zero to say that it is rented	
*/
int rent(){
	printf("Nous sommes désolé cette fonction n'est pas fini ouvrez le code pour voir sa focntionnalité\n");
	/*
	int num,i;
	Car c;
	history();
	printf("Entrez le numéro de la voiture que vous voulez louer :\n");
	scanf("%d",&c.num);
	if (c.commendable == 1){
		printf("Cette voiture peut-être louer.\n");
		c.commendable--;
	}
	else{
		printf("Cette voiture est déjà louer.\n");
	}
	*/
}


/*
The restore() function allows you to return a rented car to be done by first displaying the history and asking the customer to enter the number of the car corresponding to the one he has rented
if it is well rented then we put the commendable back to 1 otherwise we tell the customer that he got the wrong number and that he must give the car number again
*/
int restore(){
	printf("Nous somme désolé cette fonction n'est pas fini ouvrez le code pour voir sa fonctionnalité\n");
}


/*
The Action1() function is the manager interface it allows the manager to perform the actions possible 
by the latter such as displaying the history or adding a car
*/
int Action1(){
	int password, choice2,checkpassword;
	password=2129557;
	printf("\n           Bienvenue          \n");
	printf("Entrez le mot de passe de gérant :\n");// here we ask the manager's password 
	scanf("%d",&checkpassword);
	if(password==checkpassword){
		printf("\nQue voulez-vous faire ?\n");
		printf("\n1.Voir l'historique des voitures\n2.Ajouter une voiture\n3.Quitter\n");// the action of a manager 
		scanf("%d",&choice2);
		do{
			switch(choice2){
				case(1)://if you want to see the history
					history();//display the history 
					Action1();//ask again what you want to do after seeing the history
					break;
				case(2)://if you want to add a new car
					Add();//to add a car
					break;
				case(3):
					break;
				default:
					printf("Entrez un des choix possible\n");
					break;
			}
		}while(choice2>3 || choice2<=0);
		
	}
	else{
		printf("Le mot de passe est incorrect !! \n");
		exit(1);
	}
}


/* 
The ACtion2() function is the client interface it allows the client to perform the actions possible 
by the latter such as displaying the history, rent a car or return a car
*/	
int Action2(){
	int choice1;
	printf("\n              Bienvenue cher client             \n");
	printf("\nQuelle action voulez-vous faire ?\n1.Voir le garage\n2.Louer une voiture\n3.Rendre une voiture\n4.Quitter\n");
	scanf("%d",&choice1);
	do{
		switch(choice1){
			case(1):
				history();//this function display the history
				break;
			case(2):
				rent();//this function is to rent a car
				break;
			case(3):
				restore();//this function is to return a car
				break;
			case(4):
				break;
			default:
				printf("Entrez un choix possible\n");
				scanf("%d",&choice1);
				break;
				
		}
	}while(choice1>4 || choice1<=0);
	
	

}


/* The menu is used to make the link between all the functions and to put them in common, it first asks if you are a customer or a manager so that you can go to the right interface and use the right functions in relation to what you are
*/	
int menu(){
	int choice;
	printf("Bienvenue dans votre location de voiture .\n\n");
	printf("***Menu***\n");
	printf("Etes-vous ?\n");
	printf("1.Gérant \n");
	printf("2.Client\n");
	printf("3.Quitter\n");
	scanf("%d",&choice);
	do{
		switch(choice){
			case(1):
				Action1();//Manager interface
				break;
			case(2):
				Action2();//Client interface
				break;
			case(3):
				break;
			default:
				printf("Entrez un chiffre entre 1 et 3\n");
				scanf("%d",&choice);
				break;
		}
	}while(choice>3 || choice<=0);	
 }
	

int main(){
	printf("*********************************************\n");
	printf("           Application CY-Loca               \n");
	printf("*********************************************\n");
	menu();

	return 0;
}




	
