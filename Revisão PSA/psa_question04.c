#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,j,c,l,soma,lin_vazio=0,col_vazio=0;
	printf("Informe o número de linhas da matriz: ");
	scanf("%d",&l);
	printf("Informe o número de colunas da matriz: ");
	scanf("%d",&c);
	i=l,j=c;
	int m[i][j];
	printf("\n");
	for(i=0;i<l;i++)
	{
		soma=0;
		for(j=0;j<c;j++)
			{
				printf("Informe o elemento da linha %d coluna %d: ",i+1,j+1);
				scanf("%d",&m[i][j]);
				if(i==0 && j==0)
					soma=m[i][j];
				else
					soma+=m[i][j];
				if(j==(c-1) && soma==0)
					lin_vazio++;
			}
	}
	soma=0;
	for(j=0;j<c;j++)
	{
		for(i=0;i<l;i++)
			{
				if(i==0 && j==(c-1))
					soma=m[i][j];
				else
					soma+=m[i][j];
				if(i==(l-1) && soma==0)
					col_vazio++;
			}
	}
	for(i=0;i<l;i++)
	{
		printf("\n");
		for(j=0;j<c;j++)
			{
				printf("\t%d",m[i][j]);
			}
	}
	printf("\n\nA quantidade de linhas vazias é: %d",lin_vazio);
	printf("\n\nA quantidade de colunas vazias é: %d",col_vazio);
	return 0;
}
