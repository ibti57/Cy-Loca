/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int Action(){
    int choix;
    do{
        printf("Quelle action vouez vous faire ?\n1. Emprunter une voiture.\n2. Rendre une voiture\n3. Se déconnecter\n ");
        scanf("%d",&choix);
        switch(choix){
            case 1:
                printf("emprunt()\n");
            break;
            case 2:
                printf("rendre()\n");
            break;
            case 3:
                break;
            default:
                printf("Veuillez entre une valeur entre 1 et 3");
            break;
                
        }
    }while(choix !=3);
}
int main(){
    Action();
    return 0;
}

