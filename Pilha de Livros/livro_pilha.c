#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "livro_pilha.h"

struct lista{
	char info[100];
	struct lista* prox;
};

struct pilha{
	Lista* prim;
};

Pilha* pilha_cria(void){
	Pilha* p = (Pilha*)malloc(sizeof(Pilha));
	p->prim = NULL;
	return p;
}

void pilha_push(Pilha* p, char* v){
	Lista* n = (Lista*)malloc(sizeof(Lista));
	strcpy(n->info, v);
	n->prox = p->prim;
	p->prim = n;
}

char* pilha_pop(Pilha* p){
	Lista* t;
	char* v;
	v=(char*)malloc(sizeof(char));
	if (pilha_vazia(p)){
		printf("Pilha vazia/n");
		exit(1);		
	}
	t = p->prim;
	strcpy(v, t->info);
	p->prim = t->prox;
	free(t);
	return v;
}

int pilha_vazia(Pilha* p){
	return (p->prim == NULL);
}

void pilha_libera(Pilha* p){
	Lista* q = p->prim;
	while (q != NULL){
		Lista* t = q->prox;
		free(q);
		q = t;
	}
	free(p);
}

void pilha_imprime(Pilha* p){
	
	printf("%s\n", p->prim->info);

}

void menu(){
	printf("1 - Inserir livro no topo da pilha\n");
	printf("2 - Excluir livro do topo da pilha\n");
	printf("3 - Livro do topo\n");
	printf("4 - Sair\n");
	printf("Escolha uma opcao: ");
}


