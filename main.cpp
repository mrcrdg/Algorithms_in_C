#include <iostream>

/* 1.Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. 
Faça um algoritmo que possa receber um valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%. */

int main(int argc, char** argv) {
	float valor, vdesc; // usou o float porque o valor pode ter casas decimais
	printf ("Insira o valor do produto: ");
	scanf ("%f", &valor);
	vdesc = valor * 0.91;
	printf ("Valor com desconto: %f reais", vdesc);
	
	return 0;
}
