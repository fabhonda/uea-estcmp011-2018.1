#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int x);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, fat;
	printf("Digite um número: ");
	scanf("%d",&n);
	fat = fatorial(n);
	printf("O fatorial é: %d",fat);
	return 0;
}

int fatorial(int x)
{
	int fat;
	if(x==1)
		fat=1;
	else
		fat = x * fatorial(x-2);
		
	return fat;
}
