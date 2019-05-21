

/*13.	Desenvolva um programa que receba 2 números, então faça uma multiplicação entre eles somando o resultado 5 vezes e mostre.*/

int main(){
	float numero1, numero2; // variaveis a serem inseridas
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &numero1);
	printf("Insira o segundo valor: ");
	scanf("%f", &numero2);
	
	float produto, soma; // a ser calculado
			
	produto = numero1 * numero2;	
	printf("O resultado e: %f", produto * 5);
	
	return 0;
	
}




