#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*37.	Leia uma matriz 4 x 4, imprima a matriz e retorne a localização
(linha e a coluna) do maior valor..
*/

int main (){
	
	int matriz[4][4];
	int i, j;
	int k, l;
	
	for (i = 0; i < 4; i++){	
		for (j = 0; j < 4; j++){
			printf("Valor %i, %i: ", i+1 ,j+1);
			scanf("%i", &matriz[i][j]);		   		
		}
	 	printf("\n");		
	}
	
	int maiorvalor = matriz[0][0];
	
	for (i = 0; i < 4; i++){	
		for ( j = 0; j < 4; j++){
			if (matriz[i][j] > maiorvalor){
			   
			   maiorvalor = matriz[i][j];
			  
			   k = i;
			   l = j;
			   					
			}		
		}
	}
					
		  
    printf("\n");	
 	printf("Maior valor: %i e posicao %i, %i", maiorvalor, k+1, l+1);
	
	
	return 0;
}
