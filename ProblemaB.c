#include <stdlib.h>
#include <stdio.h>

int main (void){
	int passos (int n1, int n2, int p);
	int a,i,e,j,f,p;
	printf("");
	printf("Insira p:");			scanf("%d", & i);
	if (i==0) return 0;
	e=0;
	a=0;
	p=0;
	p = p-1;
	for (j=0;j<=i;++j){
		printf("Insira f:");		scanf("%d",&f);
		e= passos(e,f,j);
		if(e<p) p=e;
		if(e>a) a=e;
	}
	p=p*(-1);
	if (a<p)a=p;
	printf("\n%d",a);
	printf("\n");
	getchar();
}
int passos (int n1, int n2, int p){
	int d;
	if (p%2==0){
		d=n1-n2;
	}else{
		d=n1+n2;
	}
	return d;
}
