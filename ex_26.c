

/*QUEST 26.	Ler dois conjuntos de números reais, armazenando-os em vetores e 
calcular o produto escalar entre eles. Os conjuntos têm 5 elementos cada. 
Imprimir os dois conjuntos e o produto escalar, 
sendo que o produto escalar é dado por: x1 * y1 + x2 * y2 + ... + xn * yn.
*/

main(){
	
	int conjunto1[5], conjunto2[5];
	
	int i; // contador
	
	printf("Conjunto 1");
	printf("\n");	
	for (i = 0; i < 5; i++) {
		printf("Insira um valor para a posicao %i/5: ", i+1); // QUEST: A primeira posicao do vetor imprime 10
		scanf("%i", &conjunto1[i]);
		printf("\n");		
	}
	
	printf("Conjunto 2");
	printf("\n");		
	for (i = 0; i < 5; i++){
		printf("Insira um valor para a posicao %i/5: ", i+1);
		scanf("%i", &conjunto2[i]);
		printf("\n");	
	}
	
	for (i = 0; i < 5; i++){
		printf("%i", conjunto1[i]);
		printf("\n");		
	}
	
	printf("\n");
	for (i = 0; i < 5; i++){
		printf("%i", conjunto2[i]);
		printf("\n");	
	}
	
	float escalar; // produto escalar entre os conjuntos de vetores;
	for (i = 0; i < 5; i++){
		escalar = escalar + (conjunto1[i] * conjunto2[i]);			
	}
	
	printf("\n");	
	printf("%f", escalar);		
	
	return 0;
}
