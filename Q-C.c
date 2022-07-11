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
