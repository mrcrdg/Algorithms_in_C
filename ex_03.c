#include <stdio.h>
#include <stdlib.h>

/* 3.	Fa�a um algoritmo que ap�s a entrada de uma determinada dist�ncia entre dois pontos(Km), e uma determinada velocidade(Km/h), 
diga qual o tempo m�dio que levar� para chegada � esse local e qual a velocidade em metros/segundos. */

int main(int argc, char *argv[]) {
	float distancia, velocidade; // valores a serem inseridos
	float tempo, velocidade2; // valores a serem calculados
	
	printf ("Insira a distancia em Km: ");
	scanf ("%f", &distancia); // utilizar "&" para atribui o valor a variavel
	printf ("Insira a velocidade em Km/h: ");
	scanf ("%f", &velocidade);
	
	tempo = (distancia / velocidade);
	velocidade2 = (velocidade * 3.6);
	
	printf ("\nO tempo percorrido foi de %f horas", tempo);
	printf ("\nA velocidade foi de %f metros/segundo", velocidade2);
	
	return 0;
}
