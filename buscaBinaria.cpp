//COMPLEXIDADE O(log n)
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
	int temperatura[] = {8,20,22,24,91,122,133,144,178,220};
	int inicio=0, fim, meio, busca=122;
	fim = sizeof(temperatura)/sizeof(int);
	//cout << fim;
	while(inicio <= fim){
		meio=(inicio+fim/2);
		if(temperatura[meio] == busca){
			cout << meio << endl;
			break;
			}
		}
	if (busca > temperatura[meio]){
		inicio = meio+1;
	} else{
		fim = meio-1;
	}
	
	return 0;
}
