
#include <stdio.h>
#include <stdlib.h>

/* 32.	Faça um programa que receba 6 números inteiros e mostre: 
a.	Os números pares digitados;
b.	A soma dos números pares digitados;
c.	Os números ímpares digitados;
d.	A quantidade de números ímpares digitados;
 */

 
 int main(int argc, char** argv) {
 
    int numeros[6], pares[6], impares[6];
    int somapares, quantimp; 
	  	  
    int i;   
    quantimp = 0;


	for (i = 0; i < 6; i++){
		printf("Valor %i/6: ", i+1);
		scanf("%i", &numeros[i]);
		printf("\n");
	}
	for (i = 0; i < 6; i++) {		
		pares[i] = 0;
		impares[i] = 0;
		
		if (numeros[i] % 2 == 0){
	 	pares[i] = numeros[i];
	 	somapares = somapares + pares[i];
		} else {			
			impares[i] = numeros[i];
			quantimp++;				
		}				
	}
	
	for(i = 0; i < 6 ; i++){		  
 		  	if (pares[i] != 0){
	   	 	   printf("\nnumero par: %i", pares[i]);
	   	 	}
	   	 	if (impares[i] != 0){
		  	   printf("\nnumero impar: %i", impares[i]);
 			   }
	}
	
	printf("\n");
	printf("\na soma dos numeros pares: %i", somapares);
	printf("\nquantidade de numeros impares: %i", quantimp);
	
	return 0;
}
