#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*QUEST 29.	Standard deviation exercise!
- Faça um programa que calcule o desvio padrão de 
um vetor v contendo n = 10 números, onde m é a média do vetor.
*/

main(){
	
	float vetor[3];
	float soma; // soma de todos os elementos vetoriais para ser calculada a media;
	float media, squared, somasquared, desvio;
	
	soma = 0;
	
	int i; //contador;
	for(i = 0; i < 4; i++) {
 		printf("Insert the # %i value: ", i + 1);
		scanf("%f", &vetor[i]);
		printf("\n");
		  
		soma = soma + vetor[i];		
	}
	media = (soma / i);
	
	//printf ("%f e %f", soma, media);
	
	for (i = 0; i < 4; i++){
		squared = pow(vetor[i] - media, 2);	
		somasquared = square;
	}
	
	desvio = sqrt(somasquared/(i - 1));
	printf("\n");
	printf ("O devio padrao foi %f ", desvio); // QUEST Valor errado , deveria ser ~ 1.29099
		
	return 0;
}
