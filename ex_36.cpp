#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*36.	Faça um programa que preenche uma matriz 4 x 4 
com o produto do valor da linha e da coluna de cada elemento.
Em seguida, imprima na tela a matriz.
*/

int main (){
	
	int matriz[4][4];
	int i, j;
	
	/*for (i = 1; i < 5; i++){	
		for ( j = 1; j < 5; j++){
					
		  // printf("Valor %i, %i: ", i+1 ,j+1);
	   	  matriz[i][j] = 0;
		   		
		}
	 	printf("\n");		
	}*/
	
	
	for (i = 0; i < 4; i++){	
		for ( j = 0; j < 4; j++){
					
			matriz[i][j] = (i + 1) * (j + 1);			
			
		}		
	}
	
	for (i = 0; i < 4; i++){	
		for ( j = 0; j < 4; j++){
					
		   printf("%i_", matriz[i][j]);		
		}
		
	 	printf("\n");		
	}
	
	
	return 0;
}
