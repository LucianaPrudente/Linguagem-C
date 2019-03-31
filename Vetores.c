#include <stdio.h>
#include <stdlib.h>
// Vetores 

//---------------------------------------------------------------------------------------------------

int main(){

	int vet[4];
	float vetooor[2];

			printf ("%f",vetooor[1]);

	vetooor[1]= 100.59;
	vet[1] = 9;
	vet[2] = 8 ;	
	vet[3] = 7;
	vet[4] = 6;
	vet[1] = vet[2] = vet[3] + vet[4];

			printf("%d\n", vet[1]);
			printf("\nmeu nome\n");

			printf("vetor 1= %d\nvetor 2= %d\n vetor 3= %d\n vetor 4= %d\n", vet[1], vet[2], vet[3], vet[4]);
	system("cls");
//---------------------------------------------------------------------------------------------------
	
	int cont, vezes=0;
	
			printf("Insira o numero de  vezes:");			scanf("%d", &vezes);
		
	for (cont=1; cont <=vezes; cont=cont+1){
		
			printf("A sequencia e %d\n", cont);
					
	}
	
//---------------------------------------------------------------------------------------------------	
//Comando "Para" em Vetores 	
	int i=0;
	for (i=1; i<=4; i= i+1){
			
			printf("insira os dados do vetor [%d]: ", i);	scanf("%d\n", &vet[i]);		
	}
	
	for (i=0; i<=4; i= i+1){
	
			printf("%d\n", vet[i]);
	}
	
	system("pause");
	return 0;
}
