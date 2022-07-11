//Alan Felicissimo Soares De Andrade
//UC21107528

#include <stdio.h>
#include <stdlib.h>


int main(){


float media , notas[3] ;
	
	printf ("\n Digite a primeira nota : ");
	scanf ("%f",&notas[0]);
	
	printf ("\n Digite a segunda nota : ");
	scanf ("%f",&notas[1]);
	
	printf ("\n Digite a teceira nota : ");
	scanf ("%f",&notas[2]);
	
	printf ("\n A primeira nota e : %f",notas[0]);
	printf ("\n A segunda nota e : %f",notas[1]);
	printf ("\n A terceira nota e : %f",notas[2]);
	
	media =  (notas[0]+notas[1]+notas[2])/3;
	
	printf ("\n A média entre as notas e : %f ",media);
	return 0;
}
