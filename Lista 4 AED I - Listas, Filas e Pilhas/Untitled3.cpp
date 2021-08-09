#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

typedef struct elemento{
	int dado;
	struct elemento *prox;
}no;

void criaLista(no **cabeca);
int listaVazia(no *cabeca);
void insereLista(no **cabeca, no *novo);
void mostraLista(no *cabeca);

int main(){
	setlocale(LC_ALL,"Portuguese");
	no *cabeca, *novo;
	int op, elemento,i;
	
	criaLista(&cabeca);
	cout << "Inserir elemento? \n1-SIM\n2-NÃO\n";
	cin >> i;
	while(i==1){
		novo = (no*)malloc(sizeof(no));
		cout << "0 ou 1? " << endl;
		cin >> novo->dado;
		
		while(novo->dado != 0 and novo->dado != 1){
			cout << "\nInválido. Digite apenas 0 ou 1\n";
			cout << "0 ou 1? " << endl;
			cin >> novo->dado;
			cout << "\nInserir elemento? \n1-SIM\n2-NÃO\n";
			cin >> i;
		}
		novo->prox = NULL;
		insereLista(&cabeca, novo);
	}
	mostraLista(cabeca);
	
}

void criaLista(no **cabeca){
   (*cabeca) = NULL;
}


void insereLista(no **cabeca, no *novo){
  no *atual=NULL, *anterior=NULL;

  if (listaVazia(*cabeca) == 1){
    (*cabeca) = novo;
  } else if ((*cabeca)->dado > novo->dado){
    novo->prox = (*cabeca);
    (*cabeca) = novo;
  } else {
    anterior = (*cabeca);
    atual = (*cabeca);
    while ((atual != NULL) && (atual->dado < novo->dado)){
      anterior = atual;
      atual = atual->prox;
    }

    if (atual != NULL){
      novo->prox = atual;
      anterior->prox = novo;
    }
    anterior->prox = novo;
  }
}
  
  int listaVazia(no *cabeca){
  if (cabeca == NULL){
    return (1);
  }else{
    return (0);
  }
}

void mostraLista(no *cabeca){
  no *atual;

  if (listaVazia(cabeca) == 1){
    cout << "Lista VAZIA !!"<< endl;
  } else{
    atual = cabeca;
    while (atual != NULL){
      cout << atual->dado << " ";
      atual = atual->prox;
    }
    cout << endl;
  }
}

