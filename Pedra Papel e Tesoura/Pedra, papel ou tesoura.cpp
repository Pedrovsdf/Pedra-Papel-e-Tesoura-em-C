#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char escolha1[30];
char escolha2[30];

printf("Jogador 1, digite pedra, papel ou tesoura: ");
scanf("%s", &escolha1);

if(strcmp (escolha1, "pedra") == 0 ||strcmp (escolha1, "papel") >= 0 || strcmp (escolha1, "tesoura") >= 0){
	printf("Jogador 2, digite pedra, papel ou tesoura: ");
	scanf("%s", &escolha2);
	if(strcmp (escolha2, "pedra") == 0 ||strcmp (escolha2, "papel") >= 0 || strcmp (escolha2, "tesoura") >= 0){
		if(strcmp (escolha1, escolha2) == 0){
			printf("Empate, os dois jogadores escolheram %s", escolha1);
			return 0;
		} else if(strcmp (escolha1, "pedra") == 0 && strcmp (escolha2, "tesoura") == 0){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(strcmp (escolha2, "pedra") == 0 && strcmp (escolha1, "tesoura") == 0){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(strcmp (escolha1, "pedra") == 0 && strcmp (escolha2, "papel") == 0){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(strcmp (escolha2, "pedra") == 0 && strcmp (escolha1, "papel") == 0){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(strcmp (escolha1, "papel") == 0 && strcmp (escolha2, "tesoura") == 0){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(strcmp (escolha2, "papel") == 0 && strcmp (escolha1, "tesoura") == 0){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(strcmp (escolha1, "tesoura") == 0 && strcmp (escolha2, "pedra") == 0){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(strcmp (escolha2, "tesoura") == 0 && strcmp (escolha1, "pedra") == 0){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(strcmp (escolha1, "tesoura") == 0 && strcmp (escolha2, "papel") == 0){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(strcmp (escolha2, "tesoura") == 0 && strcmp (escolha1, "papel") == 0){
			printf("O jogador 2 venceu.");
			return 0;
		}
	}
}

printf("\nErro.");

return 1;
}
