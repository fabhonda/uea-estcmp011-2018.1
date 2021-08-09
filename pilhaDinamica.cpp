#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct elemento{
  int dado;
  struct  elemento *prox;
}no;

void criaPilha(no **topo);
int pilhaVazia(no *topo);
void inserePilha(no **topo, no **novo);
void mostraPilha(no **topo);
void excluirPilha(no **topo);


int main(){

  no *topo, *novo;
  int op, elemento;

  criaPilha(&topo);

  do{
      cout << "1 - Inserir" << endl;
      cout << "2 - Excluir" << endl;
      cout << "3 - Verifica Pilha vazia" << endl;
      cout << "5 - Mostrar" << endl;
      cout << "6 - Sair" << endl;
      cout << "Informe:";
      cin >> op;

      if (op == 1){
        novo = (no*) malloc(sizeof(no));
        cout << "Informe o dado: "<< endl;
        cin >> novo->dado;
        novo->prox = NULL;
        inserePilha(&topo, &novo);
      } else if (op == 2){
        excluirPilha(&topo);
      } else if (op == 5){
        mostraPilha(&topo);
      } else if (op == 3){
        if (pilhaVazia(topo) == 1){
          cout << "Pilha esta vazia!!" << endl;
        } else{
          cout << "Pilha  NAO esta vazia!!" << endl;
        }
      }



  } while (op != 6);




  return (0);
}

void criaPilha(no **topo){
   (*topo) = NULL;
}

int pilhaVazia(no *topo){
  if (topo == NULL){
    return (1);
  }else{
    return (0);
  }
}

void mostraPilha(no **topo){
  no *atual;

  if (pilhaVazia(*topo) == 1){
    cout << "Pilha VAZIA !!"<< endl;
  } else{

    while ((*topo) != NULL){
      atual = (*topo);
      cout << (*topo)->dado << " ";
      (*topo) = (*topo)->prox;
      free(atual);
    }
    cout << endl;
  }
}

void inserePilha(no **topo, no **novo){
  no *atual=NULL;;

  (*novo)->prox = (*topo);
  (*topo) = (*novo);

}

void excluirPilha(no **topo){
  no *anterior, *atual;

  if (pilhaVazia(*topo) == 1){
    cout << "Pilha vazia!!";
  } else{

    atual = (*topo);
    (*topo) = (*topo)->prox;
    free(atual);
  }
}
