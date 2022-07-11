//Alan Felicissimo Soares De Andrade
//UC21107528

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "");
	char nome[50];
	int i;
	printf("Insira seu nome: ");
	gets(nome);
	for (i=0; nome[i] != NULL; i++){
		putchar(toupper(nome[i]));
	}
	printf("\nSeu nome contém %d caracteres", i);
	return 0;
}

