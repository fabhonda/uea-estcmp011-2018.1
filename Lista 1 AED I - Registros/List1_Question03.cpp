#include <iostream>
#include <locale>
using namespace std;

typedef struct{
	string nome, matricula;
	float n1, n2;
}cadastro;

float ler_alunos(int n);

int main(){
	setlocale(LC_ALL,"Portuguese");
	float media1, media2;
	media1 = ler_alunos(1);
	media2 = ler_alunos(2);
	cout << "\nA média do aluno 1 é: " << media1;
	cout << "\nA média do aluno 2 é: " << media2;
	return 0;
}

float ler_alunos(int n){
	if (n==1){
	cadastro aluno1;
	cout << "\nInforme seu nome: ";
	cin >> aluno1.nome;
	fflush(stdin);
	cout << "Informe sua matrícula: ";
	cin >> aluno1.matricula;
	cout << "Informe a nota 1: ";
	cin >> aluno1.n1;
	cout << "Informa e nota 2: ";
	cin >> aluno1.n2;
	float media1;
	media1=((aluno1.n1+aluno1.n2)/2);
	return media1;
	}
	else{
	cadastro aluno2;
	cout << "\nInforme seu nome: ";
	cin >> aluno2.nome;
	fflush(stdin);
	cout << "Informe sua matrícula: ";
	cin >> aluno2.matricula;
	cout << "Informe a nota 1: ";
	cin >> aluno2.n1;
	cout << "Informa e nota 2: ";
	cin >> aluno2.n2;
	float media2;
	media2=((aluno2.n1+aluno2.n2)/2);
	return media2;
	}

}
