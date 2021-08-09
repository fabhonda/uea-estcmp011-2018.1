#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	string nvoo, tipo;
	float preco;
	int lugares;
}voos;

int main(){
	setlocale(LC_ALL,"Portuguese");
	float preco_menor, preco_maior;
	voos aviao[2];
	for(int i=0;i<2;i++){
		cout << "\nInforme o número do voo " << i+1 << ": ";
		cin >> aviao[i].nvoo;
		cout << "Informe o tipo: ";
		cin >> aviao[i].tipo;
		cout << "Informe o preço: ";
		cin >> aviao[i].preco;
		cout << "Informe o número de lugares: ";
		cin >> aviao[i].lugares;
	}
	cout << "\n\nInforme o menor preço que deseja pesquisar: ";
	cin >> preco_menor;
	cout << "Informe o maior preço que deseja pesquisar: ";
	cin >> preco_maior;
	
	for(int i=0; i<2; i++){
		if(preco_menor <= aviao[i].preco and preco_maior >= aviao[i].preco){
			cout << "\n\n";
			cout << "Número do voo: " << aviao[i].nvoo;
			cout << "\nTipo de avião: " << aviao[i].tipo;
			cout << "\nPreço da viagem: " << aviao[i].preco;
			cout << "\nNúmero de lugares: " << aviao[i].lugares;
		}
	}
	return 0;
}






