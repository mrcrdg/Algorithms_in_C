#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*42. QUEST	Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
*/


main () {
	
	int matriz[3][3];	
	
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("Insira o valor %i / %i: ", i, j);
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
	
	printf("\n");
		
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("%i", matriz[j][i]);					
		}
		printf("\n");
	}
		
	return 0;	
	
}
