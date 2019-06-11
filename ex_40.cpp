#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*40.	Leia uma matriz de 3 x 3 elementos.
Calcule a soma dos elementos que estão na diagonal principal.
*/

main () {
	
	int matriz[3][3];
	int soma; // soma dos elementos da diagonal principal i = j
	
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			printf("Insira o valor %i / %i: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
		printf("\n");		
	}
	
	soma = 0;
	for (int i = 1; i < 4; i++){		
		for (int j = 1; j < 4; j++){
			if ( i == j )
			soma = soma + matriz[i][j];			
		}
	}
	
	printf("%i", soma);
	
	return 0;	
}

