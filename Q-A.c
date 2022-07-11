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
