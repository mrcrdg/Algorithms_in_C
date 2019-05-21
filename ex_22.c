
/*22.	Faça um vetor de tamanho 50 preenchido com o seguinte valor:
(i+5 * i)%(i+1), sendo i a posição do elemento no vetor. 
Em seguida imprima o vetor na tela.
*/

main () {
	
	float vetor[5];
	
	int i; //contador
	for (i = 0; i < 6; i++){
			
		vetor[i] = ((i + 5) * i)/(i + 1);
		printf("\n");
		printf("%.4f", vetor[i]); //QUEST : Pq nao esta imprimindo o resultado das casas apos a virgula?
		printf("\n");		
	}
		
	return 0;
}
