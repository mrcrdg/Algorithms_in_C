#include <stdio.h>
#include <stdlib.h>

/* 8.	Desenvolva um algoritmo que receba um número do usuário e verifique se esse número está entre 25 e 70 (25 e 70 incluídos) 
se sim mostrar na tela que o número está entre eles, se não mostrar para o usuário que eles não estão entre eles. */

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
