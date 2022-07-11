
Q-1
//Alan Felicissimo Soares De Andrade
//UC21107528 

#include <stdio.h>
#include <locale.h>


void main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	  int *ptr; // Declara um ponteiro para um inteiro
	   ptr = &x;
	     printf("O endereço de X é: %p\n", ptr);
}

Q-A
//Alan Felicissimo Soares De Andrade
//UC21107528 

#include <stdio.h>
#include <conio.h>

main () 
{
int diaN, mesN, anoN, diaA, mesA, anoA, idade;
    
    printf(" DIGITE A SUA DATA DE NASCIMENTO: dd/mm/aaaa\n");
           scanf("%d/%d/%d", &diaN, &mesN, &anoN);
    printf(" AGORA DIGITE A DATA ATUAL: dd/mm/aaaa\n");
    		scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    
    if ((mesN > mesA) || ((mesN = mesA) && (diaN > diaA)))
       idade = anoA - anoN - 1;
    else idade = anoA - anoN;
    
    printf("idade = %d", idade);
    getch();
    
}

Q-C

//Alan Felicissimo Soares De Andrade
//UC21107528 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{


	setlocale(LC_CTYPE,"portuguese");
   int num;
   int bin[8];
   int aux;

   printf("DIGITE O NÚMERO QUE SERÁ CONVERTIDO EM BINÁRIO:");
   		scanf("%d", &num);

   for (aux = 7; aux >= 0; aux--)
   {
      if (num % 2 == 0)
         bin[aux] = 0; 
      else
         bin[aux] = 1;
      num = num / 2;
   }

   for (aux = 0; aux < 8; aux++)
       printf("%d", bin[aux]);

   printf("\n");

   return 0;
}

