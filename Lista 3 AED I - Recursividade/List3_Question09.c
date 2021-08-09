#include <stdio.h>
#include <stdlib.h>
int naturais(int n);
int main(){
	int n, nat;
	printf("Informe um número: ");
	scanf("%d",&n);
	naturais(n);
}

int naturais(int n){
	if(n>=0){
	printf("\n%d",n);
	naturais(n-1);
	}
	return n;
}
