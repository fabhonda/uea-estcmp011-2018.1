#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void linha(int n);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int o,n1,n2,fat,i,n4,n5;
	float n3;
	printf("Qual opera��o deseja utilizar?\n\n");
	printf("[1]Adi��o\n[2]Subtra��o\n[3]Multiplica��o\n[4]Divis�o\n[5]Fatorial\n[6]Exponencia��o\n");
	scanf("%d",&o);
	while(o<1 || o>6){
		printf("\nERRO, DIGITE UMA OPERA��O V�LIDA\n");
		linha(50);
		printf("\nQual opera��o deseja utilizar?");
		printf("\n[1]Adi��o\n[2]Subtra��o\n[3]Multiplica��o\n[4]Divis�o\n[5]Fatorial\n[6]Exponencia��o\n");
		scanf("%d",&o);
	}
	switch(o){
		case 1:
			printf("\nInforme o primeiro n�mero: ");
			scanf("%d",&n1);
			printf("Informe o segundo n�mero: ");
			scanf("%d",&n2);
			printf("\nA adi��o entre %d e %d �: %d",n1,n2,n1+n2);
			break;
		case 2:
			printf("\nInforme o primeiro n�mero: ");
			scanf("%d",&n1);
			printf("Informe o segundo n�mero: ");
			scanf("%d",&n2);
			printf("\nA subtra��o entre %d e %d �: %d",n1,n2,n1-n2);
			break;
		case 3:
			printf("\nInforme o primeiro n�mero: ");
			scanf("%d",&n1);
			printf("Informe o segundo n�mero: ");
			scanf("%d",&n2);
			printf("\nA multiplica��o entre %d e %d �: %d",n1,n2,n1*n2);
			break;
		case 4:
			printf("\nInforme o primeiro n�mero: ");
			scanf("%d",&n1);
			printf("Informe o segundo n�mero: ");
			scanf("%d",&n2);
			n3=(n1/n2);
			printf("\nA divis�o entre %d e %d �: %.2f",n1,n2,n3);
			break;
		case 6:
			printf("\nInforme o primeiro n�mero: ");
			scanf("%d",&n1);
			printf("Informe o segundo n�mero: ");
			scanf("%d",&n2);
			n5=(pow(n1,n2));
			printf("\nA exponencia��o entre %d e %d �: %d",n1,n2,n5);
			break;
	}
	if(o==5)
	{	
		printf("\nInforme um n�mero: ");
		scanf("%d",&n4);
		fat=0;
		for(i=n4;i>1;i--)
		{
			if(fat==0)
				fat=(n4*(n4-1));
			else
			fat=fat*(i-1);
		}
		printf("\nO fatorial de %d �: %d",n4,fat);
	}
	return 0;
}	
void linha(int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("*");
}
