#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int notas[80], i, fa0=0,fa1=0,fa2=0,fa3=0,fa4=0,fa5=0,fa6=0,fa7=0,fa8=0,fa9=0,fa10=0;
	for(i=0;i<80;i++)
	{
		printf("Informe a nota do %d� aluno: ",i+1);
		scanf("%d",&notas[i]);
		switch(notas[i]){
			case 0:
				fa0++;
				break;
			case 1:
				fa1++;
				break;
			case 2:
				fa2++;
				break;
			case 3:
				fa3++;
				break;
			case 4:
				fa4++;
				break;
			case 5:
				fa5++;
				break;
			case 6:
				fa6++;
				break;
			case 7:
				fa7++;
				break;
			case 8:
				fa8++;
				break;
			case 9:
				fa9++;
				break;
			case 10:
				fa10++;
				break;
			default:
				printf("\n\nERRO. INFORME UMA NOTA DE O A 10");
				break;
		}
		
	}
	printf("\nA frequ�ncia absoluta da nota 0 �: %d",fa0);
	printf("\nA frequ�ncia absoluta da nota 1 �: %d",fa1);
	printf("\nA frequ�ncia absoluta da nota 2 �: %d",fa2);
	printf("\nA frequ�ncia absoluta da nota 3 �: %d",fa3);
	printf("\nA frequ�ncia absoluta da nota 4 �: %d",fa4);
	printf("\nA frequ�ncia absoluta da nota 5 �: %d",fa5);
	printf("\nA frequ�ncia absoluta da nota 6 �: %d",fa6);
	printf("\nA frequ�ncia absoluta da nota 7 �: %d",fa7);
	printf("\nA frequ�ncia absoluta da nota 8 �: %d",fa8);
	printf("\nA frequ�ncia absoluta da nota 9 �: %d",fa9);
	printf("\nA frequ�ncia absoluta da nota 10 �: %d",fa10);
	printf("\nA frequ�ncia relativa da nota 0 �: %d",fa0/80);
	printf("\nA frequ�ncia relativa da nota 1 �: %d",fa1/80);
	printf("\nA frequ�ncia relativa da nota 2 �: %d",fa2/80);
	printf("\nA frequ�ncia relativa da nota 3 �: %d",fa3/80);
	printf("\nA frequ�ncia relativa da nota 4 �: %d",fa4/80);
	printf("\nA frequ�ncia relativa da nota 5 �: %d",fa5/80);
	printf("\nA frequ�ncia relativa da nota 6 �: %d",fa6/80);
	printf("\nA frequ�ncia relativa da nota 7 �: %d",fa7/80);
	printf("\nA frequ�ncia relativa da nota 8 �: %d",fa8/80);
	printf("\nA frequ�ncia relativa da nota 9 �: %d",fa9/80);
	printf("\nA frequ�ncia relativa da nota 10 �: %d",fa10/80);
	return 0;
}
