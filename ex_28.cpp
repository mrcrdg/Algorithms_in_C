#include <iostream>

/* 28.	Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros naturais 
que não são múltiplos de 7 ou que terminam com 7.
*/


int main()
{
	
	int cont = 0, num = 1;
	int vetor[100];
 	
	 while (cont < 100) {
	  	if (num % 10 != 7 && num % 7 != 0){
	  		vetor[cont] = num;
	  		cont++;
	 	}
		num++;
		}
		
		for (int i = 0; i < 100; i++) {
			printf("Vetor[%i] = %i\n", i, vetor[i]);				
		}
		
	return 0;
}
	
