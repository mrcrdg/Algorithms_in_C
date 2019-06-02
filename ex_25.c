#include <stdio.h>
#include <stdlib.h>

void ex25()	{
	 int a[10], b[10], c[20];
	 int i, ia, ib;
	 ia = 0;
	 ib = 0;
	 
	for (i = 0; i < 10; i++) {
        printf("Digite o valor posicao %i", i+1);
        scanf("%i", &a[i]);
    }
    for (i = 0; i < 10; i++) {
        printf("Digite o valor posicao %i", i+1);
        scanf("%i", &b[i]);
	}	
	
 	for (i = 0; i <20; i++) {
	 	if (i % 2 == 0) {
	 		c[i] = a[ia];
	 		ia++;	 		
	 	} else {
   		    c[i] = b[ib];
		 	ib++;	 	
		}  	
 	 printf("c[%i] = %i\n", i, c[i]); 
    }
}

int main() 
{
	ex25();
	return 0;
}




