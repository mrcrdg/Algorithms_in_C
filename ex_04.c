#include <stdio.h>
#include <stdlib.h>

/* 4.	Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. 
Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da diária por apartamento para o final de semana completo, 
elabore um programa para calcular:
a.	Valor promocional da diária;
b.	Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%;
c.	Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%;
d.	Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%. */

int main(int argc, char *argv[]) {
	int aptos; // numero do quartos existentes no hotel, a ser inserido pelo usu[ario
	float valordiaria; // valor da diaria do quarto correspondente, a ser inserido pelo usuario
	float valorpromocional; // valor da diaria do quarto com o desconto aplicado
	float valor70; // valor arrecado se a ocupacao no hotal for de 70%
	float valor100; // valor arrecadado se a ocupacao no hotel for de 100%
	float valorperdido; // valor deixado de arrecadar em caso de 100 de ocupacao
	
	printf ("Insira o valor normal de uma diaria em R$:");
	scanf ("%f", &valordiaria);
	printf ("Insira o numero total de quartos no hotel: ");
	scanf ("%i", &aptos);
		
	valorpromocional = valordiaria * 0.75; // valor do apto com desconto
	valor70 = (valorpromocional * aptos * 0.7); // em caso de 70% de ocupacao
	valor100 = (valorpromocional * aptos); // em caso de 100 de ocupacao
	valorperdido = (valordiaria * aptos) - valor100; // valor deixado de arrecadar
	
	printf ("\nO valor promocional de uma diaria e %.2f reais", valorpromocional);
	printf ("\nO valor arrecadado em caso 100 por cento de ocupacao eh %f reais", valor100);
	printf ("\nO valor arrecadado em caso de 70 por cento de ocupacao eh %f reais", valor70);
	printf ("\nO valor deixado de arrecadar em caso de 100 de ocupacao eh %f reais", valorperdido);
	
		
	return 0;
}
