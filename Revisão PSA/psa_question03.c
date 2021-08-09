#include <stdio.h>
#include <stdlib.h>
int main(){
	int m[4][4],j,i,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("Informe o elemento da coluna %d, linha %d: ",i+1,j+1);
			scanf("%d",&m[j][i]);
		}
	}
	printf("\nInforme um valor para k: ");
	scanf("%d",&k);
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(j==i)
				m[j][i]=(k*m[j][i]);
		}
	}
	printf("\n\nMatriz resultante: \n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			printf("\t%d",m[j][i]);
		}
	}
	return 0;
}
