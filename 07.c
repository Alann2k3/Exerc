//Alan Felicissimo Soares De Andrade
//UC21107528 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char palavra[50]; 
	char letra; 
	int i,j = 0; 

		printf("Insira uma palavra: ");
			gets(palavra);
		printf("Insira uma letra: ");
			scanf("%c", &letra);

		for(i=0; i < strlen(palavra); i++ ) { 
        	if(letra == palavra[i]) { 
                j++; 
    }
        else {
    continue; 
	}
        }

    	printf("\nA letra '%c' aparece %d vezes na palavra.", letra ,j ,palavra); 
	return 0;
}
