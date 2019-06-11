#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*43.	Gere matriz 4 x 4 com valores no intervalo [1, 20].
Escreva um programa que transforme a matriz gerada numa matriz triangular inferior,
ou seja,
atribuindo zero a todos os elementos acima da diagonal principal.
Imprima a matriz original e a matriz transformada.
*/


main () {
	
	int matriz[4][4];
	int temp; // variavel temporaria de armazenamento	
	
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("Insira o valor %i / %i entre 1 e 20: ", i, j);			
		 	//scanf("%i", &temp);
		 	//if (temp > 20)
			 //printf ("Invalido. Insira outro");
			 //else
			 scanf("%i", &matriz[i][j]);		 
		}
		printf("\n");		
	}
	
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("%i", matriz[i][j]);					
		}
		printf("\n");
	}
	
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
		if (j > i)
		matriz[i][j] = 0;			
		}
	}
		
	printf("\n");
		
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("%i", matriz[i][j]);					
		}
		printf("\n");
	}
			
	return 0;	
}
