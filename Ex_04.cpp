#include <stdio.h>

char nome[64];
int idade;
char sexo;

int main(void){
	printf("Digite o nome:");
	scanf("%s", nome);
	printf("Digite a idade:");
	scanf("%d", &idade);
	printf("Digite o genero:");
	scanf("%c", &sexo);
	printf("Digite o nome:");
	scanf("%s", nome);

	return(0);
}

