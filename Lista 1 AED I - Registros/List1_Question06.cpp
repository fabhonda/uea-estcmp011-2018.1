#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	string nome_empresa, nome_resp;
	string telefones[10];
}contato;

void coleta_dados (int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	coleta_dados(50);
	return 0;
}

void coleta_dados (int n){
	contato agenda[n];
	for(int i=0; i<n;i++){
		cout << "\nCONTATO " << i+1 << "\nInforme o nome da empresa: ";
		cin >> agenda[i].nome_empresa;
		cout << "Informe o nome da pessoa responsável: ";
		cin >> agenda[i].nome_resp;
		for(int j=0; j<10; j++){
			cout << "Informe o " << j+1 << " número de telefone: ";
			cin >> agenda[i].telefones[j];
		}
	}
}

