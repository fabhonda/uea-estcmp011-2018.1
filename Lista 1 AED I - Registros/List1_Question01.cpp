#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	string estado, cidade, bairro, rua, cep;
}endereco;

typedef struct{
	char nome[20]; 
	string identidade, telefone, cpf, sexo, estcivil;
	int idade;
	float salario;
	endereco end;
}cadastro;

void ler_imprimir (void);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	ler_imprimir();
	return 0;
}

void ler_imprimir(void){
	cadastro cliente1;
	cout << "Informe seu nome: ";
	gets(cliente1.nome);
	cout << "Informe sua identidade: ";
	cin >> cliente1.identidade;
	cout << "Informe seu CPF: ";
	cin >> cliente1.cpf;
	cout << "Informe seu número de telefone: ";
	cin >> cliente1.telefone;
	cout << "Informe sua idade: ";
	cin >> cliente1.idade;
	cout << "Informe seu salário: ";
	cin >> cliente1.salario;
	cout << "Informe seu sexo: ";
	cin >> cliente1.sexo;
	cout << "Informe seu estado civil: ";
	cin >> cliente1.estcivil;
	cout << "Informe o estado em que você mora: ";
	cin >> cliente1.end.estado;
	cout << "Informe a cidade em que você mora: ";
	cin >> cliente1.end.cidade;
	cout << "Informe o bairro em que você mora: ";
	cin >> cliente1.end.bairro;
	cout << "Informe a rua em que você mora: ";
	cin >> cliente1.end.rua;
	cout << "Informe o cep em que você mora: ";
	cin >> cliente1.end.cep;
	cout << "\nNome: " << cliente1.nome;
	cout << "\nIdentidade: " << cliente1.identidade;
	cout << "\nCPF: " << cliente1.cpf;
	cout << "\nTelefone: " << cliente1.telefone;
	cout << "\nIdade: " << cliente1.idade;
	cout << "\nSalário: " << cliente1.salario;
	cout << "\nSexo: " << cliente1.sexo;
	cout << "\nEstado civil: " << cliente1.estcivil;
	cout << "\nEstado: " << cliente1.end.estado;
	cout << "\nCidade: " << cliente1.end.cidade;
	cout << "\nBairro: " << cliente1.end.bairro;
	cout << "\nRua: " << cliente1.end.rua;
	cout << "\nCep: " << cliente1.end.cep;
}
