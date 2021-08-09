#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct elemento{
  int dado;
  struct  elemento *prox;
}no;

void criaLista(no **cabeca);
int listaVazia(no *cabeca);
void insereLista(no **cabeca, no *novo);
void mostraLista(no *cabeca);
void excluirLista(no **cabeca, int elemento);


int main(){

  no *cabeca, *novo;
  int op, elemento;

  criaLista(&cabeca);

  do{
      cout << "1 - Inserir" << endl;
      cout << "2 - Excluir" << endl;
      cout << "3 - Verifica Lista vazia" << endl;
      cout << "5 - Mostrar" << endl;
      cout << "6 - Sair" << endl;
      cout << "Informe:";
      cin >> op;

      if (op == 1){
        novo = (no*) malloc(sizeof(no));
        cout << "Informe o dado: "<< endl;
        cin >> novo->dado;
        novo->prox = NULL;
        insereLista(&cabeca, novo);
      } else if (op == 2){

        cout << "Informe o elemento que deseja excluir: ";
        cin >> elemento;
        excluirLista(&cabeca,elemento);



      } else if (op == 5){
        mostraLista(cabeca);
      } else if (op == 3){
        if (listaVazia(cabeca) == 1){
          cout << "Lista esta vazia!!" << endl;
        } else{
          cout << "Lista  NAO esta vazia!!" << endl;
        }
      }



  } while (op != 6);




  return (0);
}

void criaLista(no **cabeca){
   (*cabeca) = NULL;
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

void insereLista(no **cabeca, no *novo){
  no *atual=NULL, *anterior=NULL;

  if (listaVazia(*cabeca) == 1){
    (*cabeca) = novo;
  } 
  else 
  		if ((*cabeca)->dado > novo->dado){
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

void excluirLista(no **cabeca, int elemento){
  no *anterior, *atual;

  if (listaVazia(*cabeca) == 1){
    cout << "Lista vazia!!";
  } else{

    anterior = (*cabeca);
    atual = (*cabeca);
    while ((atual != NULL) && (atual->dado != elemento)){
      anterior = atual;
      atual = atual->prox;
    }

    if (atual == NULL){
      cout << "Elemento nao encontrado!!" << endl;
    }else {
      if (atual == (*cabeca)){
        (*cabeca) = atual->prox;
      } else {
        anterior->prox = atual->prox;
      }
      free(atual);
    }

  }

}
