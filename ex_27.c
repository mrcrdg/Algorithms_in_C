#include <stdio.h>
#include <stdlib.h>

/*27.	Faça um programa que leia dez conjuntos de dois valores, 
o primeiro representando o número do aluno e o segundo representando a sua altura em metros
 Encontre o aluno mais baixo e o mais alto.
 Mostre o número do aluno mais baixo e do mais alto, juntamente com suas alturas.
*/

main(){
	
	int matricula[4]; 
	float altura[4];
	float maisbaixo, maisalto;
	
	
	int i;
	for (i = 0; i < 5; i++){ // for para rececer os dados de numero de matricula e altura de cada aluno (5 alunos);
		printf("Insira o numero de matricula do aluno #%i", i+1);
		scanf("%i", &matricula[i]);
		printf("Insira a altura deste aluno: ");
		scanf("%f", &altura[i]);
		
		printf("\n");		
	}
	
	for (i = 0; i < 5; i++){
		if (i = 0)
		    maisbaixo = altura[i];
	   	    maisalto = altura[i];
		else
			if (i = 1) 
			   if altura[i] < maisbaixo; {
			   	  	maisbaixo = altura [i];
				} else {
					if altura[i] > maisalto
					maisalto = altura[i];		   
 				}
		
	}
	
	
	printf("A altua do aluno mais alto foi %f", maisalto);
	printf("A altua do aluno mais baixo foi %f", maisbaixo);
	
	
	
	
	return 0;
}
