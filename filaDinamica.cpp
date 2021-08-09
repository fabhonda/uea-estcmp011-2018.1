#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct elemento{
  int dado;
  struct  elemento *prox;
}no;

void criaFila(no **inicio, no **fim);
int filaVazia(no *inicio);
void insereFila(no **inicio, no **fim, no *novo);
void mostraFila(no **inicio, no **fim);
void excluirFila(no **inicio, no **fim);


int main(){

  no *inicio, *fim, *novo;
  int op, elemento;

  criaFila(&inicio, &fim);

  do{
      cout << "1 - Inserir" << endl;
      cout << "2 - Excluir" << endl;
      cout << "3 - Verifica Fila vazia" << endl;
      cout << "5 - Mostrar" << endl;
      cout << "6 - Sair" << endl;
      cout << "Informe:";
      cin >> op;

      if (op == 1){
        novo = (no*) malloc(sizeof(no));
        cout << "Informe o dado: "<< endl;
        cin >> novo->dado;
        novo->prox = NULL;
        insereFila(&inicio,&fim, novo);
      } else if (op == 2){
        excluirFila(&inicio,&fim);
      } else if (op == 5){
        mostraFila(&inicio,&fim);
      } else if (op == 3){
        if (filaVazia(inicio) == 1){
          cout << "Fila esta vazia!!" << endl;
        } else{
          cout << "Fila  NAO esta vazia!!" << endl;
        }
      }



  } while (op != 6);




  return (0);
}

void criaFila(no **inicio, no **fim){
   (*inicio) = NULL;
   (*fim) = NULL;
}

int filaVazia(no *inicio){
  if (inicio == NULL){
    return (1);
  }else{
    return (0);
  }
}

void mostraFila(no **inicio, no**fim){
  no *atual;

  if (filaVazia(*inicio) == 1){
    cout << "Fila VAZIA !!"<< endl;
  } else{

    while ((*inicio) != NULL){
      atual = (*inicio);
      cout << (*inicio)->dado << " ";
      (*inicio) = (*inicio)->prox;
      free(atual);
    }
    cout << endl;
  }
}

void insereFila(no **inicio, no **fim, no *novo){
  no *atual=NULL;

  if (filaVazia(*inicio) == 1){
    (*inicio) = novo;
    (*fim) = novo;
  } else{
    (*fim)->prox = novo;
    (*fim) = novo;
  }
}

void excluirFila(no **inicio, no **fim){
  no *atual;

  if (filaVazia(*inicio) == 1){
    cout << "Fila vazia!!";
  } else {
    atual = (*inicio);
    if ((*inicio) == (*fim)){
      (*inicio) = NULL;
      (*fim) = NULL;
    } else{
      (*inicio) = (*inicio)->prox;
    }
    free(atual);
  }
}
