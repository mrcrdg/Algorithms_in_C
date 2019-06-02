#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*34.	Faça um programa que leia dois vetores de 10 elementos.
Crie um vetor que seja a união entre os 2 vetores anteriores, ou seja,
que contém os números dos dois vetores. Não deve conter números repetidos.
*/

int vetor1[10], vetor2[10], uniao[20];
int i, k;

void imprimirvetor(){
	
	for (i = 0; i < k; i++){
		if (uniao[i] != 0) {
			printf("uniao %i ", uniao[i]);
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
	
	k = 0;
	
	for (i = 0; i < 10; i++){
		bool inserir = true;
		for (int j = 0; j < k; j++){
			if (vetor1[i] == uniao[j]) {
				inserir = false;
			}
		}
		if (inserir) {
		   uniao[k] = vetor1[i];
		   k++;
		}
	}
	
	for (i = 0; i < 10; i++){
		bool inserir = true;
		for (int j = 0; j < k; j++){
			if (vetor2[i] == uniao[j]) {
				inserir = false;
			}
		}
		if (inserir) {
		   uniao[k] = vetor2[i];
		   k++;
		}
	}	
	
	printf("\nImprimindo vetor e %i", k);	
	imprimirvetor();	
	
	return 0;
}


