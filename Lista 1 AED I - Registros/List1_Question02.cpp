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
		cout << "\nInforme o n�mero do voo " << i+1 << ": ";
		cin >> aviao[i].nvoo;
		cout << "Informe o tipo: ";
		cin >> aviao[i].tipo;
		cout << "Informe o pre�o: ";
		cin >> aviao[i].preco;
		cout << "Informe o n�mero de lugares: ";
		cin >> aviao[i].lugares;
	}
	cout << "\n\nInforme o menor pre�o que deseja pesquisar: ";
	cin >> preco_menor;
	cout << "Informe o maior pre�o que deseja pesquisar: ";
	cin >> preco_maior;
	
	for(int i=0; i<2; i++){
		if(preco_menor <= aviao[i].preco and preco_maior >= aviao[i].preco){
			cout << "\n\n";
			cout << "N�mero do voo: " << aviao[i].nvoo;
			cout << "\nTipo de avi�o: " << aviao[i].tipo;
			cout << "\nPre�o da viagem: " << aviao[i].preco;
			cout << "\nN�mero de lugares: " << aviao[i].lugares;
		}
	}
	return 0;
}






