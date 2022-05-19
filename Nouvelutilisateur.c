#include <stdio.h>
#include <stdlib.h>
#define NAME 100
#define PASS 100

void Newuser(){
	char user;
	int* mdp=NULL;
	mdp=malloc(12);
	if(mdp == NULL){
		exit(0);
	}
	do
	{
		printf("Entrez un nom d'utilisateur (max 12 caracatères)");
		scanf("%s",user);
	}while 

}

int main(){
	Newuser();
	return 0;
}
