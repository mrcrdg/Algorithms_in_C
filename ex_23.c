
/*23.	Escreva um programa que leia números inteiros no intervalo [0,50] 
e os armazene em um vetor com 10 posições. 
Preencha um segundo vetor apenas com os números ímpares do primeiro vetor. 
Imprima os dois vetores, 2 elementos por linha.
*/

main() {
	
	int vetor[9];
	int pares[9];
	
	int i;//contador
	for (i = 0; i < 10; i++) {
		printf("Insert a value for the position #%i: ", i+1);
		scanf("%i", &vetor[i]);
		
		if (vetor[i] % 2 == 0)
			pares[i] = vetor[i];
			
		else
			pares[i] = 0;
			
	printf("\n");		
	}
	
	for (i = 0; i < 10; i++) {
		printf("%i", pares[i]);
		printf("\n");
	}		
	return 0;
}
