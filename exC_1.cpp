#include <iostream>

/* Leitura de duas notas e calculo da media para verificar a aprovacao/reprovacao do aluno */

int main(){
	float n1, n2, media;
	int frequencia, i;

	//for ( i = 0, i < 3, i ++){
	
	printf ("Insira a primeira nota ");
	scanf ("%f", &n1);

	printf ("Insira a segunda nota ");
	scanf ("%f", &n2);
	media = (n1 + n2) / 2;
	
	printf ("Insita a frequencia do aluno/n ");
	scanf ("%i", &frequencia);
	printf ("A media das notas e %.2f", media);
	if (media >= 7 && frequencia >= 70) {
		printf("Aprovado.");
	}else if (media < 7 && media >= 5 && frequencia >= 70){
		printf("/n Exame.");
	} else {
		printf("Reprovado. ");
	}
	//}	
	return 0;
}
