#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
float perc=0, perCand10 =0, perCand9=0, perCand4=0, perCand3=0, perCand2=0, perCand1=0, vencedor=0;
char nomeVenc;

int cand1, cand2, cand3, cand4, cand9, cand10, TotVot;
int maior = 0;
printf ("\n________________________________________________________________________________");
				printf("\n\t\t\t INSIRA O NUMERO DE VOTOS ");
printf ("\n________________________________________________________________________________");
				printf("\nJoao de Barro: "); scanf("%d", &cand1);
				printf("Supercombo:"); scanf("%d", &cand2);
				printf("Medulla:"); scanf("%d", &cand3);
				printf("Legiao Urbana:"); scanf("%d", &cand4);
				printf("Nulo:");   scanf("%d", &cand9);
				printf("Branco:");   scanf("%d", &cand10); 

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

       vencedor = (maior*TotVot)/100.0;     
printf ("\n________________________________________________________________________________");
				printf("\n\t\t\tRESULTADO");
if (nomeVenc =='J')
	printf("\nVencedor e Joao de Barro;");
	else
	  if (nomeVenc =='S')
		printf("\nVencedor e Supercombo;");
	   else
	     if (nomeVenc =='M')
			printf("\nVencedor e Medulla;");
	      else
	        if(nomeVenc=='A')
			printf("\nVencedor e Legiao Urbana;");

				printf("\nO percentual de votos validos e %0.2f%%;", perc );
 				printf("\nPercentual do vencedor e %0.2f%%;", vencedor);
 				printf ("\nPercentual de votos nulos e %0.2f%%;", perCand9);
 				printf("\nPercentual de votos em branco e %0.2f%%;", perCand10);
                printf("\n\n");
printf ("________________________________________________________________________________\n");
	system ("pause");
	return 0;
}
