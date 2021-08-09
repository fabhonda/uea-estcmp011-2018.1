#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	FILE *entrada;
	FILE *saida;
	// char caractere;
	char arq_aux, nome[30];
	int idade1, idade2;
	entrada = fopen("b.txt", "r");
	if(entrada==NULL){
		printf("\nAquivo não pôde ser aberto");
	}
	putc('a',entrada);
	fprintf(entrada, "\n%d %d %s",12,12,"maria");
	fprintf(entrada, "\n%d %d %s",222,32,"joao");
	
	// caractere=getc(entrada);
    //	while(caractere != EOF){
	//	printf("%c",caractere);
	//	caractere=getc(entrada);
	//}
	
	arq_aux=fscanf(entrada,"%d" "%d" "%s", &idade1, &idade2, &nome);
	while(arq_aux != EOF){
		printf("%d",idade1);
		printf("%d",idade2);
		printf("%s",nome);
		arq_aux=fscanf(entrada, "%d" "%d" "%s", &idade1, &idade2, &nome);
	}
	
	fclose(entrada);
	return 0;
}

