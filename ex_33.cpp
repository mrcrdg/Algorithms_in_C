#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*33.	Faça um programa que leia dois vetores de 10 elementos. 
Crie um vetor que seja a intersecção entre os 2 vetores anteriores, ou seja, 
que contém apenas os números que estão em ambos os vetores.
Não deve conter números repetidos.
*/

int vetor1[10], vetor2[10], interseccao[10];
int i;

void imprimirvetor(){
	
	for (i = 0; i < 10; i++){
		if (interseccao[i] != 0) {
			printf("interseccao %i ", interseccao[i]);
			printf("\n");
		}
	}	
}

main(){
			
	for (i = 0; i < 10; i++){
		printf("Valor %i/10 : ", i+1);
		scanf("%i", &vetor1[i]);
		printf("\n");		
	}
	
	for (i = 0; i < 10; i++){
		printf("Valor %i/10: ", i+1);
		scanf("%i", &vetor2[i]);
		printf("\n");		
	}
	
	for (i = 0; i < 10; i++){
	
		for (int j = 0; j < 10; j++){
			
			if (vetor1[i] == vetor2[j]) {
		   	    interseccao[i] = vetor1[i];
				
				break;
				   	
            } else {
   			    interseccao[i] = 0;
			}					
		}			
	}	
		
	imprimirvetor();
	
	
	return 0;
}



