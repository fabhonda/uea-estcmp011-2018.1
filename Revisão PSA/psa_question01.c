#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
void linha(int b);
int main(){
	setlocale(LC_ALL,"Portuguese");
	char gabarito[29], resposta[29];
	int j,a,i,acerto;
	printf("\nInforme a quantidade de alunos: ");
	scanf("%d",&a);
	for(i=0;i<30;i++)
	{
		if(i>=0 && i<6)
			resposta[i]='a';
		if(i>=6 && i<12)
			resposta[i]='b';
		if(i>=12 && i<18)
			resposta[i]='c';
		if(i>=18 && i<24)
			resposta[i]='d';
		if(i>=24 && i<=30)
			resposta[i]='e';
	}
	for(j=0;j<a;j++)
	{
		printf("\n\nAluno %d: \n",j+1);
		acerto=0;
		for(i=0;i<30;i++)
		{
			printf("Questão %d. Resposta: ",i+1);
			gabarito[i]=getche();
			printf("\n");
			if(gabarito[i]==resposta[i])
				acerto++;
			while(gabarito[i]!='a' && gabarito[i]!='b' && gabarito[i]!='c' && gabarito[i]!='d' && gabarito[i]!='e')
			{
				printf("\nERRO. INFORME UMA RESPOSTA DE a ATÉ e");
				printf("\nQuestão %d. Resposta: ",i+1);
				gabarito[i]=getche();
				printf("\n");
			}
		}
		printf("\nA quantidade de acertos do aluno %d foi: %d",j+1,acerto);
		printf("\n");
		linha(68);
		
	}
	return 0;
}


void linha(int b)
{
	int i;
	for(i=0;i<b;i++)
	printf("*");
}
