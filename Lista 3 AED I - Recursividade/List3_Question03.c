#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int inv, n;
	printf("Informe um número: ");
	scanf("%d",&n);
	inv = inverte(n);
	printf("\n%d",inv);
	
	
}


int inverte(int n){
	int vet[sizeof(n)/4], i;
	if(n==0)
		return 0;
	else{
		for(i=0;i<sizeof(n)/4;i++)
		vet[i]= n % 10;
		i++;
		vet[i]= n/=10;
		inverte(n);
	}
		
	return n;
}



