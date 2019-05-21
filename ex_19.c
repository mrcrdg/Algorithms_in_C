
/*QUEST 19.	Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

int main (){
	
	int vetor[5];
		
	int i; // variavel de controle do para
	for (i = 0; i < 6; i++){	
	printf("Insira um valor para a posicao %i: ", i+1);
	scanf("%i", &vetor[i]);	
	printf("\n");
	}
	
	printf("\n");// QUEST: verificar porque esta imprimindo o numero 1 antes de imprimir o vetor inteiro.
	for (i = 6; i >= 0; i--){		
	printf("%i", vetor[i]);
	printf("\n");	
	}
	
	return 0;
}




