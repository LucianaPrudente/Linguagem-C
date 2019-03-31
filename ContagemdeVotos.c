#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*float percentual ( float Totalvotos, float quantCandidatos,float percentualAdotado){
                percentualAdotado = ((quantCandidatos*TotalVotos)/100.0);
				printf("%f", percentualAdotado);
				return percentualAdotado;
}*/


  /*  void print(){

 				printf("\n\n");
				printf("\n------------------------------------------------------------");
				printf("\nO percentual de votos validos e %0.2f%%", perc );
 				printf("\nPercentual do vencedor e %0.2f%%", vencedor);
 				printf ("\nPercentual de votos nulos e %0.2f%%", perCand9);
 				printf("\nPercentual de votos em branco e %0.2f%%", perCand10);
                printf("\n\n");
    } */

void print2(int cand1, int cand2, int cand3, int cand4, int cand9, int cand10){
    printf("\t\t\t INSIRA O NUMERO DE VOTOS ");

				printf("\nJoao de Barro: "); scanf("%d", &cand1);
				printf("Supercombo:"); scanf("%d", &cand2);
				printf("Medulla:"); scanf("%d", &cand3);
				printf("Legiao Urbana:"); scanf("%d", &cand4);
				printf("Nulo:");   scanf("%d", &cand9);
				printf("Branco:");   scanf("%d", &cand10);

}


//11 55 9 8 3
//10 20 10 30 10 20

int main(){
void print();
float percentual ( float Totalvotos, float quantCandidatos,float percentualAdotado);	
void print2(int cand1, int cand2, int cand3, int cand4, int cand9, int cand10);
	
float perc=0, perCand10 =0, perCand9=0, perCand4=0, perCand3=0, perCand2=0, perCand1=0, vencedor=0;
char nomeVenc;

int cand1, cand2, cand3, cand4, cand9, cand10, TotVot;
int maior = 0;
			printf("\t\t\t INSIRA O NUMERO DE VOTOS ");

				printf("\nJoao de Barro: "); scanf("%d", &cand1);
				printf("Supercombo:"); scanf("%d", &cand2);
				printf("Medulla:"); scanf("%d", &cand3);
				printf("Legiao Urbana:"); scanf("%d", &cand4);
				printf("Nulo:");   scanf("%d", &cand9);
				printf("Branco:");   scanf("%d", &cand10); 

				print2(cand1, cand2, cand3, cand4, cand9, cand10);

/*
		TotVot = cand1 + cand2 + cand3 + cand4 + cand9 + cand10;
		perCand1 = (cand1*TotVot)/100.0;
		perCand2 = (cand2*TotVot)/100.0;
		perCand3 = (cand3*TotVot)/100.0;
		perCand4 = (cand4*TotVot)/100.0;
		perCand9 = (cand9*TotVot)/100.0;
		perCand10 = (cand10*TotVot)/100.0;
   	 	perc = perCand1 + perCand2 + perCand3 + perCand4 + perCand10;
 	 	perCand9;
 		perCand10;
*/


	TotVot = cand1 + cand2 + cand3 + cand4 + cand9 + cand10;

        percentual(TotVot, cand1, perCand1);
        percentual(TotVot, cand2, perCand2);
        percentual(TotVot, cand3, perCand3);
        percentual(TotVot, cand4, perCand4);
        percentual(TotVot, cand9, perCand9);
        percentual(TotVot, cand10, perCand10);

   	 	perc = perCand1 + perCand2 + perCand3 + perCand4 + perCand10;
 	 	perCand9;
 		perCand10; 


if (cand1>maior) {
    maior=cand1;
	nomeVenc = 'J';
}
	  if (cand2>maior) {
        maior=cand2;
	  	nomeVenc = 'S';
	  }
	     if (cand3>maior){
			maior=cand3;
			nomeVenc = 'M';
	 	 }
	        if(cand4>maior) {
				maior=cand4;
				nomeVenc = 'A';
			}

       vencedor = maior*(TotVot/100.0);     //maior*(/);

if (nomeVenc =='J')
	printf("\n\tJoao de Barro");
	else
	  if (nomeVenc =='S')
		printf("\nVencedor e Supercombo");
	   else
	     if (nomeVenc =='M')
			printf("\nVencedor Medulla");
	      else
	        if(nomeVenc=='A')
			printf("\nVencedor e Legiao Urbana");


                //print();

	system ("pause");
	return 0;
}
