#include <stdio.h>
#include <stdlib.h>

int main(){

int escolha1;
int escolha2;

printf("Jogador 1, digite 1 para pedra, 2 para papel ou 3 para tesoura: ");
scanf("%d", &escolha1);

if(escolha1 == 1 ||escolha1 == 2 || escolha1 == 3){
	printf("Jogador 2, digite 1 para pedra, 2 para papel ou 3 para tesoura: ");
	scanf("%d", &escolha2);
	if(escolha2 == 1 ||escolha2 == 2 || escolha2 == 3){
		if(escolha1 == escolha2){
			printf("Empate, os dois jogadores escolheram %d", escolha1);
			return 0;
		} else if(escolha1 == 1 && escolha2 == 3){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(escolha1 == 3 && escolha2 == 1){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(escolha1 == 1 && escolha2 == 2){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(escolha1 == 2 && escolha2 == 1){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(escolha1 == 2 && escolha2 == 3){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(escolha1 == 3 && escolha2 == 2){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(escolha1 == 3 && escolha2 == 1){
			printf("O jogador 2 venceu.");
			return 0;
		} else if(escolha1 == 1 && escolha2 == 3){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(escolha1 == 3 && escolha2 == 2){
			printf("O jogador 1 venceu.");
			return 0;
		} else if(escolha1 == 2 && escolha2 == 3){
			printf("O jogador 2 venceu.");
			return 0;
		}
	}
}

printf("\nErro.");

return 1;
}
