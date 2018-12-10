#include <stdio.h>
#include <stdlib.h>

int num, obstaculos[50]; 
int main(int argc, char **argv){
	int mmc(int num, int *obstaculos);
	int i,resp;
		printf("_______________________________________________________________________");
		printf("\n\t\t\t ***Arqueiro Top***");	
		printf("\n_____________________________________________________________________");
		printf("\n\t~~>Insira a quantidade de obstaculos: ");		scanf("%i",&num);
	for(i=0;i<num;i++){
		printf("\t~>Insira a frequencia:");							scanf("%i",&obstaculos[i]);}
		printf("\n\t\t____________________________");
		printf("\n\t\t\tMomento Topzao: %d", mmc(num,&obstaculos));
		printf("\n\t\t____________________________");
	return 0;
}
int mmc(int num, int *obstaculos){
	int divisivel, x,y, z=0, Mmc[50];
	int divisores[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
	for (y=0; y<10; y++){
		divisivel = 0;
		for (x=0;x<num;x++){
			if	((obstaculos[x] % divisores[y]) == 0){
				obstaculos[x] = obstaculos[x] / divisores[y];
				divisivel = 1;
			}
		}
		if(divisivel == 1){
			Mmc[z++] = divisores[y];
			y--;
		}
	}
	int RESULTADO = 1;
	for(x = 0; x < z; x++){
		RESULTADO *= Mmc[x];
	}
	return RESULTADO;
}
