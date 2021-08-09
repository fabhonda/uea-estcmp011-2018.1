#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i;
	float s;
	printf("Digite um número: ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(i%2!=0)
			s+=(i+1+n)/n*n;
		else
			s-=(i+1+n)/n*n;
	}
	printf("\n\t%.2f",s);
	return 0;
}
