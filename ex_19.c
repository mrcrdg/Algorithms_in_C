#include <stdio.h>
#include <stdlib.h>

/*19.	Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

int main (){
	
	int vetor[5];
		
	int i; // variavel de controle do para
	for (i = 0; i < 5; i++){	
	printf("Insira um valor para a posicao %i: ", i+1);
	scanf("%i", &vetor[i]);	
	printf("\n");
	}
	
	printf("\n");
	for (i = 4 ; i >= 0; i--){		
	printf("%i", vetor[i]);
	printf("\n");	
	}
	
	return 0;
}




