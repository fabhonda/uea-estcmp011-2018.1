#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct elemento{
	int dados;
	struct elemento *prox;
}no;

void criaLista(no **cabeca);
int listaVazia(no *cabeca);



int main(){
	no *cabeca, *novo;
	int op;
	
	criaLista(&cabeca);
	
	do{
		cout << "1 - Inserir" << endl;
		cout << "2 - Excluir" << endl;
		cout << "3 - Mostrar" << endl;
		cout << "4 - Vazia" << endl;
		cout << "Informe: ";
		cin >> op;
		
		if(op == 1){
			novo = (no*)malloc(sizeof(no));
			if (novo==NULL){
				cout << "Erro!!";
				return 1;
			}
			cout << "Informe um valor: " << endl;
			cin >> novo->dados;
			novo->prox = NULL;
			
			if (listaVazia == 1){
				
			}
		}
	}while (op!=6);
}


void criaLista(no **cabeca){
	(*cabeca) = NULL;
}

int listaVazia(no *cabeca){
	if(cabeca == NULL){
		return 1;
	else
		return 0;
	}
}
