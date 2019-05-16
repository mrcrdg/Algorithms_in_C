#include <iostream>

/* 5.	Elabore um algoritmo para efetuar o c�lculo da quantidade de combust�vel gasto em uma viagem, 
utilizando-se um autom�vel que faz 12 Km por litro. Para obter o c�lculo, o usu�rio dever� fornecer o tempo gasto e a velocidade m�dia durante a viagem. 
Desta forma, ser� poss�vel obter a dist�ncia percorrida (dist�ncia = tempo * velocidade). */

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
