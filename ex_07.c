#include <stdio.h>
#include <stdlib.h>

/* 7.	Desenvolva um algoritmo que verifica se a senha digitada pelo usuário é a senha correta. (Utilize a senha "4433"). */

int main(int argc, char *argv[]) {
	int senha;
	
	printf ("Insira a senha de acesso:");
	scanf ("%i", &senha);
	
	if (senha == 4433){
		printf ("Senha correta.");
	} else{
		printf ("Senha incorreta.");
	}
	
	return 0;
}
