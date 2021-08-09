#include <stdio.h>
#include <stdlib.h>

#define MAX 2

typedef struct{
	char nome[30], end[40], rg[10], fone[12];
}tCliente;


int main(){
	FILE *arqCliente;
	tCliente vetCli[MAX], vetLeCli[MAX];
	int retorno;
	arqCliente = fopen("dadosCli.bin","r+b");
	if(arqCliente == NULL){
		printf("File couldn't be open");
		return 0;
	}
	// printf("%d",sizeof(tCliente));
	/*
	int i;
	for(i=0;i<MAX;i++){
		puts("\nNome ?");
		gets(vetCli[i].nome);
		puts("Endereço ?");
		gets(vetCli[i].end);
		puts("Telefone ?");
		gets(vetCli[i].fone);
		puts("RG ?");
		gets(vetCli[i].rg);
	}
	
	puts("Gravando...");
	for(i=0;i<MAX;i++){
	retorno = fwrite(&vetCli[i],sizeof(tCliente),1,arqCliente);
	if(retorno!=1){
		printf("Error");	
	}
	
	rewind(arqCliente);
	*/
	puts("Lendo...");
	int i;
	for(i=0;i<MAX;i++){
		retorno = fread(&vetCli[i],sizeof(tCliente),1,arqCliente);
		if(retorno!=1){
			if(feof(arqCliente)){
				break;
			}
			puts("Error 2");	
		}
	}
 // }
return 0;
}



