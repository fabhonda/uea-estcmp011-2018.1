#include <stdio.h>
#include <stdlib.h>
int pot(int k, int n);
int main(){
	int k,n, potencia;
	printf("Digite o valor de k: ");
	scanf("%d",&k);
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	potencia = pot(k,n);
	printf("\n%d",potencia);
}

int pot(int k, int n){
	int potencia;
	if(n==1)
		potencia=k;
	else
		potencia = k * pot(k,n-1);
	return potencia;
}
