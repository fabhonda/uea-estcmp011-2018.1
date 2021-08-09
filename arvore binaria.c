#include <stdio.h>
#include <stdlib.h>

typedef struct elemento{
	int dado;
	struct elemento* dir;
	struct elemento* esq;
}no;

int arvore_vazia(no *t);
void inserir(no *t, int dado);
no busca_elemento(no t, int dado);
no maximo(no T);
no minimo(no T);


int main(){
	
}

int arvore_vazia(no *t){
	if(t==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

void inserir(no *t, int dado){
	int ok;
	if(*t == NULL){
		*t = (no *)malloc(sizeof(no));
		if(*t == NULL){
			return;
		}
		(*t)->esq = NULL;
		(*t)->dir = NULL;
		(*t)->info = dado;
	}
	if(dado < (*t)->info){
		inserir(&((*t)->esq),dado);
	}
	else{
		if(dado > (*t)->info){
			inserir(&((*t)->dir),dado);
		}
	}
}

no busca_elemento(no t, int dado){
	no achou;
	if(arvore_vazia(t)){
		return NULL;
	}
	if(t->info == dado){
		return t;
		achou = busca_elemento(t->esq,dado);
	}
	if(arvore_vazia(achou)){
		achou = busca_elemento(t->dir,dado);
		return achou;
	}
}

no maximo(no T){
	if(!arvore_vazia(T)){
		while(!arvore_vazia(T->dir)){
			T = T->dir;
		}
	}
	return T;
}

no minimo(no T){
	if(arvore_vazia(T)){
		return T;
	}
	else{
		return minimo(T->esq);
	}
}
