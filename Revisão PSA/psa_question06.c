#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void linha(int n);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int o,n1,n2,fat,i,n4,n5;
	float n3;
	printf("Qual operação deseja utilizar?\n\n");
	printf("[1]Adição\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[5]Fatorial\n[6]Exponenciação\n");
	scanf("%d",&o);
	while(o<1 || o>6){
		printf("\nERRO, DIGITE UMA OPERAÇÃO VÁLIDA\n");
		linha(50);
		printf("\nQual operação deseja utilizar?");
		printf("\n[1]Adição\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n[5]Fatorial\n[6]Exponenciação\n");
		scanf("%d",&o);
	}
	switch(o){
		case 1:
			printf("\nInforme o primeiro número: ");
			scanf("%d",&n1);
			printf("Informe o segundo número: ");
			scanf("%d",&n2);
			printf("\nA adição entre %d e %d é: %d",n1,n2,n1+n2);
			break;
		case 2:
			printf("\nInforme o primeiro número: ");
			scanf("%d",&n1);
			printf("Informe o segundo número: ");
			scanf("%d",&n2);
			printf("\nA subtração entre %d e %d é: %d",n1,n2,n1-n2);
			break;
		case 3:
			printf("\nInforme o primeiro número: ");
			scanf("%d",&n1);
			printf("Informe o segundo número: ");
			scanf("%d",&n2);
			printf("\nA multiplicação entre %d e %d é: %d",n1,n2,n1*n2);
			break;
		case 4:
			printf("\nInforme o primeiro número: ");
			scanf("%d",&n1);
			printf("Informe o segundo número: ");
			scanf("%d",&n2);
			n3=(n1/n2);
			printf("\nA divisão entre %d e %d é: %.2f",n1,n2,n3);
			break;
		case 6:
			printf("\nInforme o primeiro número: ");
			scanf("%d",&n1);
			printf("Informe o segundo número: ");
			scanf("%d",&n2);
			n5=(pow(n1,n2));
			printf("\nA exponenciação entre %d e %d é: %d",n1,n2,n5);
			break;
	}
	if(o==5)
	{	
		printf("\nInforme um número: ");
		scanf("%d",&n4);
		fat=0;
		for(i=n4;i>1;i--)
		{
			if(fat==0)
				fat=(n4*(n4-1));
			else
			fat=fat*(i-1);
		}
		printf("\nO fatorial de %d é: %d",n4,fat);
	}
	return 0;
}	
void linha(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("*");
}
