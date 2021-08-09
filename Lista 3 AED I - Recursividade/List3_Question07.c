#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int Multip_Rec(int n1, int n2);
int main(){
	setlocale(LC_ALL,"Portuguese");
	int n1,n2, m;
	printf("Digite o primeiro número: ");
	scanf("%d",&n1);
	printf("Digite o segundo número: ");
	scanf("%d",&n2);
	m = Multip_Rec(n1,n2);
	printf("\n%d",m);
}

int Multip_Rec(int n1, int n2){
	int m;
	if(n2==1)
		m=n1;
	else
		m = n1 + Multip_Rec(n1,n2-1);
	return m;
}
