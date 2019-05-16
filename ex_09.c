#include <stdio.h>
#include <stdlib.h>

/* 9.	Desenvolva um algoritmo que receba dois números do usuário e 
crie a opção de escolha somar ou subtrair esses dois números um do outro e mostrar o resultado. */

int main(int argc, char *argv[]) {
	float number1, number2; //inserido pelo usuario
	int operacao; // soma ou subtracao
	float resultado; // resultado da operacao
	
	printf ("Insira um numero: ");
	scanf ("%f", &number1);
	printf ("Insira outro numero: ");
	scanf ("%f", &number2);
	
	printf ("Digite 1 para somar, ou 2 para subtrair: ");
	scanf ("%i", &operacao);
	
	if (operacao == 1){
		resultado = (number1 + number2);
		printf ("A soma equivale a %0.1f", resultado);
	} else if (operacao == 2){
		resultado = number1 - number2;
		printf ("A subtracao equivale a %0.1f", resultado);
	} else {
		printf ("Operacao invalida.");
	}
		
	return 0;
}
