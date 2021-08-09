#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	string nome, sexo;
	int cpf;
	float altura, peso;
}cadastro;

void coleta_dados(int n);
int pergunta(void);

int main(){
	setlocale(LC_ALL,"Portuguese");
	coleta_dados(2);
	return 0;
}

void coleta_dados(int n){
	cadastro pessoas[n];
	int busca;
	for(int i=0; i<n;i++){
		cout << "\nInforme seu nome: ";
		cin >> pessoas[i].nome;
		fflush(stdin);
		cout << "Informe seu cpf: ";
		cin >> pessoas[i].cpf;
		cout << "Informe sua altura: ";
		cin >> pessoas[i].altura;
		cout << "Informe seu peso: ";
		cin >> pessoas[i].peso;
		cout << "Informe seu sexo: ";
		cin >> pessoas[i].sexo;
		if(i+1==n){
			busca = pergunta();
			float imc;
			for(int i=0; i<n;i++){
				if(busca==pessoas[i].cpf){
					imc=(pessoas[i].altura / (pessoas[i].peso * pessoas[i].peso));
					cout << "\nIMC: " << imc;
				}
			}
		}	
	}		
}

int pergunta(void){
	int busca;
	cout << "\n\nInforme o cpf que deseja buscar: ";
	cin >> busca;
	return busca;
}
