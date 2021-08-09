#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	int codigo;
	string nome;
	float preco;
}cadastro;

int pergunta(void);
void coleta_dados(int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	coleta_dados(2);
	return 0;
}

void coleta_dados(int n){
	cadastro produtos[n];
	int busca;
	for(int i=0; i<n;i++){
		cout << "\nInforme o código do produto: ";
		cin >> produtos[i].codigo;
		cout << "Informe o nome do produto: ";
		cin >> produtos[i].nome;
		cout << "Informe o preço do produto: ";
		cin >> produtos[i].preco;
	}
	for(int i=0; i<n;i++){
	cout << "\nCódigo: " << produtos[i].codigo;
	cout << "\nNome do produto: " << produtos[i].nome;
	cout << "\nPreço: " << produtos[i].preco;
	cout << "\n";
	}
		busca = pergunta();
		for(int i=0; i<n;i++){
			if(busca==produtos[i].codigo){
				cout << "\nPreço: " << produtos[i].preco;
				}
			}
		}			

int pergunta(void){
	int busca;
	cout << "\n\nInforme o código de algum produto: ";
	cin >> busca;
	return busca;
}
