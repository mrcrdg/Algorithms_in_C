#include <stdio.h>
#include <stdlib.h>

/* 12.	Desenvolva um algoritmo que receba 
a velocidade m�dia, a dist�ncia e o tempo percorrido por um carro de um ponto A para o ponto B, 
usando a velocidade e a dist�ncia verifique se o tempo recebido � verdadeiro ou falso,
e mostre uma mensagem com a resposta correta. */

int main (){
	float velocidade, distancia, tempo;
	
	printf("Insira a velocidade de percurso: ");
	scanf("%f", &velocidade);
	printf("Insira a distancia: ");
	scanf("%f", &distancia);
	printf("Insira o tempo de percurso: ");
	scanf("%f", &tempo);
	
	if (tempo == (distancia / velocidade)) {
		printf("O tempo esta correto.");
	} else {	
		printf("Tempo incorreto.");
	
	}

	return 0;
}





