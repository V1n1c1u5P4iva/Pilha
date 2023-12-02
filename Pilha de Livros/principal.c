#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "livro_pilha.h"

int main(){
	int op;
	char v[100];
	Pilha* p;
	p = pilha_cria();
	setlocale(LC_ALL,"portuguese");
	do{
		system("CLS");
		menu();
		scanf("%d", &op);
		switch (op){
			case 1:
				printf("Digite o titulo do livro: ");
				scanf(" %99[^\n]", v);
				pilha_push(p, v);
				break;
			case 2:
				strcpy(v, pilha_pop(p));
				printf("O livro excluído é %s\n", v);
				system("PAUSE");
				break;
			case 3:
				pilha_imprime(p);
				system("PAUSE");	
				break;
			default:
				break;
		}
	} while (op != 4);
	pilha_libera(p);
	return 0;
}

