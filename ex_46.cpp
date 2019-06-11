#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*46.	Faça um programa para corrigir uma prova com 10 questões de múltipla escolha
(a, b, c, d ou e),  em uma turma com 3 alunos.
 Cada questão vale 1 ponto.
 Leia o gabarito, e para cada aluno leia sua matricula (número inteiro) e suas respostas.
 Calcule e escreva:
 Para cada aluno, escreva sua matrícula, suas respostas, e sua nota.
 O percentual de aprovação, assumindo média 7.0.
*/


main () {
	
	
	char prova[3][11];
	char gabarito[10];
	int pontos[10]; // pontuacao de cada aluno;
	
	
	for (int i = 0; i < 3; i++){		
		printf("Aluno %i\n", i+1 );	
		for (int j = 0; j < 10; j++){
			
			if ( j < 1) {
			printf("Insira a matrícula: ");
			scanf(" %c", &prova[i][j]);
		} else{
			printf("Insira a reposta %i: ", j+1 );
			scanf(" %c", &prova[i][j]);
			}
		}
		printf("\n");		
	}
		
	for (int j = 0; j < 10; j++){
	printf("Insira o gabarito %i: ", j );
	scanf(" %c", &gabarito[j]);	
	}
	
	//comparacao entre respostas e gabarito
	for (int i = 0; i < 3; i++){		
			
		for (int j = 0; j < 10; j++){
			
			if (prova[i][j] == gabarito[j])
			pontos[i]++;				
		}
	}	

	for (int i = 0; i < 3; i++){
		printf("A pontuacao do aluno %i foi %i\n: ", i+1 , pontos[i]);	
	}			
	
	return 0;
	
}
