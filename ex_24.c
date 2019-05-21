
/*24.	Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. 
Crie um vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.

*/

main(){
	
	int A[9], B[9], C[9]; // vetores
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("Complete the position #%i for the vector A: ", i+1);
		scanf("%i", &A[i]);	
		printf("\n");
	}
	
	for (i = 0; i < 10; i++) {
		printf("Complete the position #%i for the vector B: ", i+1);
		scanf("%i", &B[i]);	
		printf("\n");
	}	
	
	for (i = 0; i < 10; i++) {
		C[i] = A[i] + B[i];
		printf("%i", C[i]);
		printf("\n");	
	}
	
	return 0;
}

