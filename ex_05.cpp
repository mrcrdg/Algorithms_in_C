#include <iostream>

/* 5.	Elabore um algoritmo para efetuar o cálculo da quantidade de combustível gasto em uma viagem, 
utilizando-se um automóvel que faz 12 Km por litro. Para obter o cálculo, o usuário deverá fornecer o tempo gasto e a velocidade média durante a viagem. 
Desta forma, será possível obter a distância percorrida (distância = tempo * velocidade). */

int main(int argc, char** argv) {
	float tempo, velocidade; //variaveis inseridas pelo usuario
	float distancia; // valor calculado
	float combustivel; 
	printf ("Insira o tempo de percurso em horas: ");
	scanf ("%f", &tempo);
	printf ("Insira a velocidade media em Km/h: ");
	scanf ("%f", &velocidade);
	
	distancia = velocidade / tempo;
	combustivel = distancia / 12;
	
	printf ("A distancia percorrida foi de %0.2f Km", distancia);
	printf ("\nForam gastos %0.2f litros de combustivel", combustivel);	
	
	return 0;
}
