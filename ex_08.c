#include <stdio.h>
#include <stdlib.h>

/* 8.	Desenvolva um algoritmo que receba um n�mero do usu�rio e verifique se esse n�mero est� entre 25 e 70 (25 e 70 inclu�dos) 
se sim mostrar na tela que o n�mero est� entre eles, se n�o mostrar para o usu�rio que eles n�o est�o entre eles. */

int main(int argc, char *argv[]) {
	int number; // variavel a ser inserida
	
	printf ("Insira um numero: ");
	scanf ("%i", &number);
	
	if (number >= 25 && number <=70) {
		printf ("\nNumero contido no intervalo [25,70].");
	} else {
		printf("\nNumero nao contido no intevalo [25,70].");
	}

	return 0;
}
