#include <stdio.h>
#include <stdlib.h>

/* 11.	Desenvolva um algoritmo que receba o salário da pessoa e calcule a quantidade de empréstimos que ele pode fazer de acordo com a tabela. */

int main(int argc, char *argv[]) {
	float salario, desconto; // desconto quer dizer emprestimo
	
	printf ("Insira o salario em R$: ");
	scanf ("%f", &salario);
	
	if (salario < 500){
		desconto = salario * 0.05;
	} else if (salario >= 500 && salario < 1000) {
		desconto = salario * 0.1;
		} else if(salario >= 1000 && salario < 2000){
			desconto = salario * 0.2;
		} else if (salario >= 2000 && salario < 3000){
			desconto = salario * 0.3;
		} else if (salario > 3000) {
			desconto = salario * 0.4;
		}		
	
	printf ("O emprestimo equivale a %.2f reais", desconto);	
	
	return 0;
}
