#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int fatorial(int x);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n, i;
	printf("Digite um número: ");
	scanf("%d",&n);
	
	
	fat = fatorial(n);
}

int fatorial(int x)
{
	int fat;
	if(x==0)
		fat=1;
	else
		fat = x * fatorial(x-1);
		
	return fat;
}
