
/*QUEST 25.	Faça um programa que leia dois vetores de 10 posições 
e calcule outro vetor contendo, nas posições pares os valores do primeiro 
e nas posições impares os valores do segundo.
*/

main (){
	int primeiro[3], segundo[3];
	int uniao[7];
	
	int i;
	for (i = 0; i < 4; i++) {
		printf("Complete the position #%i for the first vector: ", i+1);
		scanf("%i", &primeiro[i]);	
		printf("\n");
	}
	
	for (i = 0; i < 4; i++) {
		printf("Complete the position #%i for the second one: ", i+1);
		scanf("%i", &segundo[i]);	
		printf("\n");
	}	
	//Falhou daqui pra baixo
	for (i = 0; i < 8; i++) {
		
		if (i = 0)
		uniao[i] = primeiro[i];
		else
			if (i = 1)
			uniao[i] = segundo[i];
			else
				if (i % 2 == 0) 
				uniao[i] = primeiro[i];
				else
					if (i % 2 != 0)
					uniao[i] = segundo[i];							
			
		printf("\n");	
	}
	
	for (i = 0; i < 8; i++) {
		printf("%i", uniao[i]);
		printf("\n");	
	}
	
	return 0;
}
