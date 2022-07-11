//Alan Felicissimo Soares De Andrade
//UC21107528

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void){

	setlocale(LC_CTYPE,"portuguese");
	char palavra[60]; 
	char letra;
	int i,j = 0; 

	printf("\nDigite uma letra\n");
	scanf("%c",&letra);

	printf("\nDigite uma palavra\n");
	scanf("%s",palavra); 

	for(i=0; i < strlen(palavra); i++ ) { 
            if(letra == palavra[i]) { 
                j++; 
            }
            
            else {
                continue; 
            }
        }

    printf("\nA letra %c aparece %d vezes na palavra %s \n", letra ,j ,palavra); 




    system("pause");
	return 0;
}

