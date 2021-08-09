#include <stdio.h>
#include <stdlib.h>
int func(int n);
int main(){
	int n;
	printf("Digite o número: ");
	scanf("%d",&n);
	int x;
	x = func(n);
	printf("\n%d",x);
	return 0;
}

int func(int n){
	if(n==2 || n==3)
		return 1;
	else
		return func(n-1) + func(n-2);
	
}



