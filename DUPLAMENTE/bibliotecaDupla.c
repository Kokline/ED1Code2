#include "bibliotecaDupla.h"

#include <stdlib.h>
#include <stdio.h>

dadosDupla* inserirInicio(dadosDupla *listaDupla){
	dadosDupla *novo = (dadosDupla*) malloc (sizeof(dadosDupla));
	novo->codigo = rand() % 1000;
	novo->anterior = NULL;
	novo->proximo = listaDupla;

	if (listaDupla != NULL){
		listaDupla->anterior = novo;
	}

	return novo;
}

dadosDupla* inserirFim(dadosDupla *listaDupla){
	dadosDupla *novo = (dadosDupla*) malloc (sizeof(dadosDupla));
	novo->codigo = rand() % 1000;
	novo->proximo = NULL;

	if (listaDupla == NULL){
		novo->anterior = NULL;
		return novo;
	} else {
		dadosDupla *atual = listaDupla;
		while (atual->proximo != NULL){
			atual = atual->proximo;
		}
		atual->proximo = novo;
		novo->anterior = atual;
		return listaDupla;
	}
}

void excluir(dadosDupla **lista, int cod){
	if (lista != NULL) {
		dadosDupla *atual = *lista;
		while (atual->codigo != cod && atual != NULL){
			atual = atual->proximo;
		}

		if (atual == NULL){
			printf("\nRegistro não encontrado.");
			return;
		} else {
			if (atual->anterior != NULL){
				atual->anterior->proximo = atual->proximo;
			} else {
				*lista = (*lista)->proximo;
			}
			if (atual->proximo != NULL){
				atual->proximo->anterior = atual->anterior;
			}
			free(atual);
		}
	}
}

void imprimirLista(dadosDupla *tmp){
	if (tmp == NULL){
		return;
	}

	printf("\nAnterior %p - Meu endereço %p - Código %d - Próximo %p\n",
			tmp->anterior, tmp, tmp->codigo, tmp->proximo);
	imprimirLista(tmp->proximo);
}
