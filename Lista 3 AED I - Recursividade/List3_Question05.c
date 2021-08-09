#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int somar(int n);
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int soma, n;
	printf("Digite o número de elementos: ");
	scanf("%d",&n);
	soma = somar(n);
	printf("\nA soma é: %d", soma);
}

int somar(int n){
	int soma;
	if(n==1)
		soma=1;
	else
		soma = n + somar(n-1);
	return soma;
}
