#include <iostream>
#include <locale>
#include <string.h>
using namespace std;

typedef struct{
	string sexo;
	char cor_olhos[1];
	float altura;
	int idade;
}caracteristicas;

void coleta_dados(int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	coleta_dados(2);
}

void coleta_dados (int n){
	caracteristicas habitantes[n];
	float media=0;
	int maior_idade=0, qtd_feminino=0, contador=0, homens=0;
	for(int i=0; i<n; i++){
		cout << "\nInforme o sexo do habitante " << i+1 << " : ";
		cin >> habitantes[i].sexo;
		cout << "Informe a altura do habitante " << i+1 << " : ";
		cin >> habitantes[i].altura;
		cout << "Informa a idade do habitante " << i+1 << " : ";
		cin >> habitantes[i].idade;
		cout << "Informe a cor dos olhos (a - azuis / v - verdes / c- castanhos) do habitante " << i+1 << " : ";
		cin >> habitantes[i].cor_olhos;
		
		if(habitantes[i].cor_olhos == "c" and habitantes[i].altura > 1,6){
			contador++;
		}
		if(habitantes[i].idade > maior_idade){
			maior_idade = habitantes[i].idade;
		}
		if((habitantes[i].sexo == "feminino" and habitantes[i].idade >= 20 and habitantes[i].idade <=45)){
			if (habitantes[i].cor_olhos == "v" and habitantes[i].altura < 1,7)
				qtd_feminino++;
		}
	}

	cout << "\n\nA média das pessoas com olhos castanhos e altura superior a 1.60 m é: " << media;
	cout << "\nA maior idade dos habitantes é: " << maior_idade;
	cout << "\nAquantidade de indivíduos do sexo feminino com idade entre 20 e 45 anos ou que tenham olhos verdes e altura inferior a 1.70m é: " << qtd_feminino;
}
