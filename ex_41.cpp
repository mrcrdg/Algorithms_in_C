#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*41.	Leia uma matriz de 3 x 3 elementos.
Calcule a soma dos elementos que estão na diagonal secundária.
*/

main () {
	
	
	int matriz[3][3];
	int soma;
	
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
			if ( i + j == 4 )
			soma = soma + matriz[i][j];			
		}
	}
	
	printf("%i", soma);
	
	return 0;		
	
}
