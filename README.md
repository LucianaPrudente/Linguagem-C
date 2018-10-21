# Linguagem-C
Algoritmos da disciplina de Linguagem de Programação.
#include <stdio.h>
#include <stdlib.h>
int main (){
int n,p,d,i;
int cont=0; 
int vetor [n];
			printf("\n________________________________________________________________________");
			printf("\t\*Cafufa Duplo*");
			printf("\nInsira a quantidade de numeros que entrarao na contagem: ");		scanf("%d",&n);
			printf("Insira o primeiro numero: ");								scanf("%d",&p);
			printf("Insira o segundo numero: ");								scanf("%d",&d);
			printf("\n________________________________________________________________________");
			printf("\n\t\t\tRESULTADO");
			printf("\n");
	for (i=1; i<n+1; i++){
	int x,y,a,b;
	
		cont=cont+1;
			x=i%p;	
			y=i%d;
			a=(i-p)%10;
			b=(i-d)%10;
		if ((x==0) || (y==0) || (a==0) || (b==0)){
			printf("Cafufa, ");
		} else {
			printf("%i",i);
			printf(", ");
		}
	}
return 0;
} 
