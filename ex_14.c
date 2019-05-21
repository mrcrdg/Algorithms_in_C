
/*14.	Desenvolva um programa que receba 10 notas e verifique se é maior ou igual a 60 é aprovado e menor de 60 é reprovado.*/

int main(){

	float nota;
	int i; //contador
	
	for (i = 0; i < 10; i++) {		

	printf("Insira a nota do aluno %i: ", i+1);
	scanf("%f", &nota);

		if (nota >= 60) {
			printf("Aluno aprovado.");	
		} else {
			printf("Aluno reprovado.");
				}		
	printf("\n");
	}
	
	return 0;	
}
	
	
