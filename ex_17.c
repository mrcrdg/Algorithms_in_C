
/*17.	Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos:
a.	Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. ok
b.	Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
c.	Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
d.	Mostre na tela cada valor do vetor A, um em cada linha.
*/

int main (){
	int vetor[5];
	
	vetor[0] = 1;
	vetor[1] = 0;
	vetor[2] = 5;
	vetor[3] = -2;
	vetor[4] = -5;
	vetor[5] = 7;
	
	int i; // variavel de controle do for
	for (i = 0; i < 6; i++){	
	printf("%i", vetor[i]);
	printf("\n");
	}
	printf("\n");
	
	int soma; //variavel de soma entre os valores das posições A[0], A[1] e A[5]
	soma = vetor[0] + vetor[1] + vetor[5];
	printf ("A soma das 1, 2 e 6 posicoes foi %i", soma);
	
	vetor[3] = 100;
	
	printf("\n");
	for (i = 0; i < 6; i++){	
	printf("%i", vetor[i]);
	printf("\n");
	}
	
	return 0;
}

