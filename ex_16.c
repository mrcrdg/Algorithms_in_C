
/*16.	Em uma partida de futebol 10 jogadores se machucaram. O programa deve receber a idade e a altura deles em cm.
Imprima na tela então:
a.	A quantidade de jogares com idade superior a 18 anos.
b.	A quantidade de jogares com idade inferior ou igual a 18 anos.
A média aritmética da altura desses jogadores.
*/

int main (){
	
	int idade;
	float altura;
		
	int i; //contador
	int maioridade = 0; //contador de jogadores maiores de idade
	int menoridade = 0; //contador de jogadores menores ou igual a 18
	
	
	for (i = 0; i <3; i++){
		printf("Insira a idade do atleta %i: ", i+1);
		scanf("%i", &idade);
		printf("Insira a altura do atleta %i: ",i+1);
		scanf("%f", &altura);
		
		if (idade > 18)
			maioridade++;
		if (idade <= 18)					
			menoridade++;
		
	printf("\n");
			
		}
		
	printf("A quantidade de jogadores maiores de idade foi %i", maioridade);
	printf("\n");
	printf("A quantidade de jogadores menores ou igual 18 anos foi %i", menoridade);	
	
	return 0;
}
