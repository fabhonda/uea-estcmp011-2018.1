#include <stdio.h>
#include <stdlib.h>
int naturais(int n);
int main(){
	int n, nat;
	printf("Informe um número: ");
	scanf("%d",&n);
	naturais(n);
	printf("\n%d", n);
}

int naturais(int n){
	if(n==1)
		printf("\n%d",0);
	else
		printf("\n%d", naturais(n-1));
	return n;
}
