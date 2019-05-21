
/*18.	Faça um programa que a. leia um vetor de 8 posições e, em seguida, 
b. leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
c. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. 
*/

int main (){
	
	int vetor[7];
		
	int i; // variavel de controle do para
	for (i = 0; i < 8; i++){	
	printf("Insira um valor para a posicao %i: ", i+1);
	scanf("%i", &vetor[i]);	
	printf("\n");
	}	
	
	int x, y; // letra b. valores correspondentes a posicoes do vetor;
	printf("Escolha uma posicao entre 1 e 8: ");
	scanf("%i", &x);
	printf("Escolha outra posicao entre 1 e 8: ");
	scanf("%i", &y);
	
	int soma; // letra c. soma dos valores encontrados nas respectivas posições X e Y
	soma = vetor[x-1] + vetor[y-1];
	printf ("A soma dos respectivos valores foi %i", soma);
	
	return 0;
}
