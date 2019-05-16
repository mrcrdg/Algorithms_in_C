#include <stdio.h>
#include <stdlib.h>

/* 10.	Desenvolva um algoritmo que receba o a média (0 a 10) de dois bimestres e calcule a nota final do aluno.
(Cada nota bimestral consiste em 2 notas, as duas de 0 a 10, mas uma com peso 3 e outra com peso 7).  */

int main(int argc, char *argv[]) {
	float nota1, nota2, notafinal;
	
	printf ("Insira a nota do primeiro bimestre: ");
	scanf ("%f", &nota1);
	printf ("Insira a nota do segundo bimestre: ");
	scanf ("%f", &nota2);
	
	
	if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10){
		notafinal = (nota1 *  0.3 + nota2 * 0.7);
		
		printf ("A nota final equivale a %.2f", notafinal);
	}	else {
		printf ("Nota invalida.");
	}

	
	return 0;
}
