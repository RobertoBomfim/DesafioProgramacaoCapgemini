#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char senha[25];
	int tam; //variável que guarda o tamanho da string
	int min; //variável que guarda a quantidade de caracteres faltantes
	
	printf("Para sua senha ser criada ela deve ter:\n - No mínimo 6 caracteres;\n - No mínimo 1 dígito;\n - Uma letra minúscula;\n - Uma letra maiúscula;\n - Um caractere especial: !@#$%^&*()-+\n");
	
	printf("Informe a senha a ser criada:");
	scanf("%s", senha);
	
	tam = strlen(senha); //função da biblioteca string.h que informa o tamanho de uma string
	
	if(tam < 6){
		min = 6 - tam;
		printf("A senha deve ter no mínimo 6 caracteres, informe mais %d!", min);
	}
	
	else
		printf("Requisito de senha atendido.");
	
	return 0;	
}