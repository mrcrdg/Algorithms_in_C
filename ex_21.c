
/*QUEST 21.	Fazer um programa para ler 50 valores e, em seguida, 
mostrar todos os valores lidos juntamente com o maior, o menor e a m�dia dos valores.
*/

main(){
	
	int vetor[5];
	int maior, menor, media;
	float soma; // soma de todos os valores do vetor
	
	int i; //contador do PARA
	for (i = 0; i < 6; i++);{
	
		printf("Insira um valor para a posicao %i", i);
		scanf("%i", &vetor[i]);
	
		if (i = 0) // QUEST N�o sei onde Colocar as chaves {}. logo nao roda.
			maior = vetor[i];
			menor = vetor[i];
		else 
				
			if (vetor[i] > maior)
			maior = vetor[i];
		
			else
				if (vetor[i] < menor)
				menor = vetor[i];							
	}
		
		
	
	soma = soma + vetor[i];	// dividir por i ao final
	printf("/n");
	}
	
	printf("O maior valor foi %i e o menor foi %i", maior, menor);
	printf("A m�dia de todos os valores � %f", soma/i);
		
	return 0;
}
