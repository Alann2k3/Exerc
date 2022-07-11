//Alan Felicissimo Soares De Andrade
//UC21107528

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
				int alunos_provas[10][3], i, j;
				float soma_aluno[10], media_turma;
		for(i=0; i< 10; i++) {
		for(j=0; j<3; j++) {
				printf("Digite a %d nota do %d aluno:\n", j+1, i+1);
				scanf("%d", &alunos_provas[i][j]);
				printf("A %d nota do %d aluno é: %d\n", j+1, i+1, alunos_provas[i][j]);
		}
	}
	for(i=0; i< 10; i++){
				soma_aluno[i] = alunos_provas[i][0] + alunos_provas[i][1] + alunos_provas[i][2];
				printf("A média do aluno %d é igual a %.2f\n", i+1, soma_aluno[i]/3);
				media_turma += soma_aluno[i];
	}
				printf("A média da turma é: %.2f", media_turma/10);
	return 0;
}
