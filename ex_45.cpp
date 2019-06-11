#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*45.	Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
referentes a 5 alunos.
Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d.
Seu programa deverá comparar as respostas de cada candidato com o gabarito 
e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.
*/


main () {
	
	char prova[5][10];
	char gabarito[10];
	int pontos[10]; // pontuacao de cada aluno;
	
	
	for (int i = 0; i < 5; i++){		
		printf("Aluno %i\n", i+1 );	
		for (int j = 0; j < 10; j++){
			
			printf("Insira a reposta %i: ", j+1 );
			scanf(" %c", &prova[i][j]);
		}
		printf("\n");		
	}
		
	for (int j = 0; j < 10; j++){
	printf("Insira o gabarito %i: ", j );
	scanf(" %c", &gabarito[j]);	
	}
	
	//comparacao entre respostas e gabarito
	for (int i = 0; i < 5; i++){		
			
		for (int j = 0; j < 10; j++){
			
			if (prova[i][j] == gabarito[j])
			pontos[i]++;				
		}
	}	

	for (int i = 0; i < 5; i++){
		printf("A pontuacao do aluno %i foi %i\n: ", i+1 , pontos[i]);	
	}			
	
	return 0;
	
}
