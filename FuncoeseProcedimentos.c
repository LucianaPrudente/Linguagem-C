#include <stdio.h>
#include <stdlib.h>

// DEVO DECLARAR A FUNÇÃO ANTES DE USAR, SE NÃO O COMPILADOR INDICARÁ ERRO (CASO DECLARADA ABAIXO DA FUNÇÃO PRINCIPAL); 
//----------------------------------------------------------------------------------------------------------------------
// 											PROGRAMA 1
// 									DECLARAÇÃO DE UM PROCEDIMENTO 
/*int main(){
	void imprimaMensagem (void); 
	imprimaMensagem(); 
	
	return 0; 
}


void imprimaMensagem (void){
	
	printf("teste."); 
	
}*/
//----------------------------------------------------------------------------------------------------------------------
// 											PROGRAMA 2
// 									DECLARAÇÃO DE UMA FUNÇÃO 
/*int main(void){
	float calcularAreaRetang(float x, float y); 
	float area = calcularAreaRetang(10.0, 20.0); // O float dessa linha é para declaração da variável área. 
	printf ("A area e: %.2f", area);
	return 0; 
}


float calcularAreaRetang(float base, float altura){
	float area = base* altura; 
	
	return area;
}*/
//----------------------------------------------------------------------------------------------------------------------
//OBS: Variáveis declaradas fora dos parâmetros e fora da função principal são VARIÁVEIS GLOBAIS; 
//OBS: Variáveis Estáticas mantém o seu valor e são reinicializadas com seu valor anterior. 
//OBS: Se declarada dentro de uma função (que é utilizada dentro da função principal) a variável Global pode se comportar como uma variável Estática. 
//OBS: Parei na videoaula n°32. ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//----------------------------------------------------------------------------------------------------------------------
//											 PROGRAMA 3

/*int gVariavelGlobal = 2; 

int main(void){
	
 void teste(void); // Declaração da Função. 

			printf("Global: %.2i\n", gVariavelGlobal); 
	teste();
	teste();
	teste();
	
	return 0; 
}

void teste(void){
	int variavelLocalAutomatica=2; 
	variavelLocalAutomatica*=2; 
	
	static int variavelLocalEstatica = 2; 
	variavelLocalEstatica*= 2; 	
		printf ("\nLocal Automatica %.2i\n", variavelLocalAutomatica);
		printf ("\nLocal Estatica %.2i\n", variavelLocalEstatica); // Espécie de Acumulador de Valor Único. 
		printf("Global: %.2i\n", gVariavelGlobal);
}*/
//----------------------------------------------------------------------------------------------------------------------
// 													PROGRAMA 4
/*int main(void){
	
	float somaDeDigitos(float num1, float num2);
	float a, b, soma; 
	
				printf("Digite dois numeros: ");
				scanf("%f", &a);		 scanf("%f", &b);
				
				
	system ("pause"); 
	return 0; 
}*/
//----------------------------------------------------------------------------------------------------------------------
//													PROGRAMA 5
// 											FUNÇÃO DENTRO DE OUTRA FUNÇÃO 
/*int main(void){
	
	float somaDeDigitos(float num1, float num2);
	int a, b, soma; 
	
			printf("digite dois numeros: "); 
			scanf("%f", &a);		scanf("%f", &b);
	soma = somaDeDigitos(a,b);
			printf("A soma dos digitos e: %.2f\n\n", soma); 
				
	system ("pause"); 
	return 0; 
}

	float somaDeDigitos(float num1, float num2){
		float valorAbsoluto (float x); 
			
			if(num1<0){
	    		num1= valorAbsoluto (num1); 
			}					
			if(num2<0){
				num2= valorAbsoluto (num2); 	
			}
		
		return (num1+num2);
	}
	
	float valorAbsoluto (float x){
		
		return (x*-1);
	}*/
//----------------------------------------------------------------------------------------------------------------------
// 													PROGRAMA 6
// 												FUNÇÃO RECURSIVA 
/*int main(void){
	
	int fatorial (int x); 
	int numero, resultado; 
	
				printf("digite um numero inteiro: ");		scanf("%i", &numero); 
				
	resultado = fatorial(numero); 
				printf("O fatorial e: %i\n", resultado); 
				
	system ("pause"); 
	return 0; 
}

	int fatorial (int x){
		int lResultado; 
		
		if (x==0){
			lResultado= 1; 
		}else{
			lResultado = x* fatorial (x-1); // "x-1" será resolvido (então terá-se uma valor para a função fatorial que iniciará 
			//um loop até que o resultado seja 0) e o valor será passado adiante até que seja igual a 0 para que a função fatorial
			// seja executada e a variável "resultado" receba seu respectivo valor. Da para fazer isso com fução  porque é 
			//necessário uma espécie de laço pois mais de uma operação é executada. 
		}
		return lResultado; 
	} 
*/
//----------------------------------------------------------------------------------------------------------------------
// 												PROGRAMA 7
// 											VETOR COMO PARÂMETRO 

/*int main(){
	int vetor[10] = {6,4,1,9,8,0,5,7,3,2}; 
	int l; 
	void ordemCrescente (int vetor [], int n ); // posso deixar o espaço do vetor e branco porque ele é apenas unidirecional;
	
	ordemCrescente(vetor, 10);
	for (l = 0; l<10; ++l){
	
				printf("%i", vetor[l]); 
	}
	system ("pause");
	return 0; 
}
	void ordemCrescente (int vetor [], int n ){ // FUNÇÃO PARA ORGANIZAÇÃO DE VALORES EM ORDEM CRESCENTE.
		int l, c, temporaria; 
		
		for (l=0; l<n; ++l){
			for (c= l+ 1; c<n; ++c){
					if(vetor[l]>vetor[c]){
						temporaria = vetor[l];
						vetor[l]= vetor[c];
						vetor[c] = temporaria; 						
					}
			}
		}
		
		return ; 
	} */
	
//----------------------------------------------------------------------------------------------------------------------
// 												PROGRAMA 8
/*int main(void){
	void funcaoPrint (int x[3][3]){
	
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9}; 

	funcaoPrint (matriz); 
	system ("pause");
	return 0; 
}

void funcaoPrint (int x[3][3]){
	int l,c; 
	for (l = 0; l<10; ++l){
			for (c = 0; c<3; ++c){
				printf("%i", matriz[l][c]); 
			}
			printf("\n"); 
	}
	return 0;
}*/
//----------------------------------------------------------------------------------------------------------------------
// 											PROGRAMA 9

// OBS: VARIÁVEIS GLOBAIS SÃO DECLARADAS FORA DAS FUNÇÕES.
// OBS: VARIÁVEIS DECLARADAS NA FUNÇÃO PRINCIPAL "MEIO" QUE AGEM COMO VARIÁVEIS GLOBAIS E QUANDO UTILIZADAS
// EM OUTRAS FUNÇÕES SÃO REPLICADAS/COPIADAS NA ESTRUTURA DAS FUNÇÕES "auxiliares". 
// OBS: NA PASSAGEM DE VETORES POR PARÂMETROS DE UMA FUNÇÃO NÃO HÁ UMA "CÓPIA" MAS SIM UMA PASSAGEM DE ENDEREÇO DO VETOR. 

int main(void){
	void funcaoPrint (int x, int vetor[]);
	int x = 10; 
	int vetor[3] = {10}; 
	
	funcaoPrint(x, vetor); 
				printf("Variavel int da funcao principal = %i\n ", x);
				printf("Vetor na funcao principal= %i \n", vetor[1]);
	
	
	system ("pause");
	return 0; 
}

void funcaoPrint (int x, int vetor[]){
	x= x+ 10; 
	vetor[1]= 20; 
	
				printf("Variavel int da funcao print = %i\n ", x);
				printf("Vetor na funcao print = %i \n", vetor[1]);
}
