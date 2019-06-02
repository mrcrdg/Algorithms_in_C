#include <stdio.h>
#include <stdlib.h>

/* QUEST 30.	Leia 10 números inteiros e armazene em um vetor. 
Em seguida escreva os elementos que são primos e 
suas respectivas posições no vetor.
*/

main(){
	
	int inteiros[10], primos[10];
	int i;
	
	
	for (i = 0; i < 10; i++){
		primos[i] = 0;
	}
	
		
	for (i = 0; i < 10; i++){
		printf("Valor %i/10: ", i+1);
		scanf("%i", &inteiros[i]);
		
		
		int divisoes = 0; // calcular o numero de divisoes do numero num intervalo de 1 ate ele mesmo;		
		
			for(int j = 1; j <= inteiros[i]; j++){
				if (inteiros[i] % j == 0) {
				divisoes++;
				}									
		  	}
		  	
		  	if (divisoes <= 2) {
				primos[i] = inteiros[i];
				}				
		printf("\n");			
	}

	for (i = 0; i < 10; i++){
			
			if (primos[i] =! 0) {
			printf("O %i eh primo e sua posicao eh %i", primos[i], i);	
			}
	    printf("\n");		
	}
	return 0;
}
