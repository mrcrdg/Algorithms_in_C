#include <stdio.h>
#include <stdlib.h>

/* 3.	Faça um algoritmo que após a entrada de uma determinada distância entre dois pontos(Km), e uma determinada velocidade(Km/h), 
diga qual o tempo médio que levará para chegada à esse local e qual a velocidade em metros/segundos. */

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
