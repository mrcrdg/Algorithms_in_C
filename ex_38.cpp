#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*38.	Leia uma matriz 5 x 5. Leia também um valor X.
O programa deverá fazer uma busca desse valor na matriz e, ao final,
escrever a localização (linha e coluna) ou uma mensagem de "não encontrado"..
*/

int main (){
	
	int matriz[5][5];
	int i, j;
	int k, l; //contadores intemediarios;
	int x; // valor ordinario ser inserido;
	
	printf("Insira X: ");
	scanf("%i", &x);
	
	for (i = 0; i < 5; i++){	
		for ( j = 0; j < 5; j++){
					
		  printf("Valor %i, %i: ", i+1 ,j+1);
		  scanf("%i", &matriz[i][j]);				
		}
	 	printf("\n");		
	}
	

	for (i = 0; i < 5; i++){	
		for ( j = 0; j < 5; j++){
		
			if ( x == matriz[i][j]) {
				k = i;
				l = j;				
			}		  				
		}	 			
	}
	
		
	printf("%i na posicao %i, %i", x, k+1, l+1);
	printf("\n");
	
		
}







