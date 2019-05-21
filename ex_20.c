
/* 20.	Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os valores lidos na ordem inversa.*/

int main(){

	int vetor[5];
	int temp; // variavel de armazenamento temporario
	
	int i;//contador
	for (i = 0; i < 6; i++) {
	vetor[i] = 0;
	}
	
	for (i = 0; i < 6; i++) {
		printf("Insira um valor PAR para a posicao %i: ", i+1);
		scanf("%i", &temp);
		
		if (temp % 2 == 0) { 					
			vetor[i] = temp;
		} else if (temp % 2 != 0) {		
			printf("Numero invalido. Insira somente numeros pares.");
			printf("\n");
		}
	}
		
	for (i = 5; i >= 0; i--) {
		printf("%i", vetor[i]);
		printf("\n");	
	}
		
return 0;
}
