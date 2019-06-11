#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*39.	Leia duas matrizes 4 x 4 e escreva uma terceira
 com os maiores valores de cada posição das matrizes lidas.
*/


main () {
	
	int matriz1 [4][4], matriz2[4][4];
	int matrizmaior[4][4];
	
	for (int i = 0; i < 4; i++){		
		for (int j = 0; j < 4; j++){
			printf("Insira o valor %i / %i: ", i+1, j+1);
			scanf("%i", &matriz1[i][j]);
		}
		printf("\n");		
	}
	
	for (int i = 0; i < 4; i++){		
		for (int j = 0; j < 4; j++){
			printf("Insira o valor %i / %i: ", i+1, j+1);
			scanf("%i", &matriz2[i][j]);
		}
		printf("\n");		
	}
	
	
	for (int i = 0; i < 4; i++){		
		for (int j = 0; j < 4; j++){
			if (matriz1[i][j] > matriz2[i][j]) 
			   matrizmaior[i][j] = matriz1[i][j];
			   else
			   matrizmaior[i][j] = matriz2[i][j];	
		}
	}
	
	for (int i = 0; i < 4; i++){		
		for (int j = 0; j < 4; j++){
			printf("%i", matrizmaior[i][j]);			
		}
		printf("\n");		
	}
	
	return 0;
	
}
