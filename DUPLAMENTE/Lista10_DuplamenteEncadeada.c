#include <stdio.h>
#include <stdlib.h>

#include "bibliotecaDupla.h"

int main(void) {
	setbuf(stdout, NULL);

	dadosDupla *lista = NULL;
	int i;

	for (i = 0; i < 5; i++){
		//lista = inserirInicio(lista);
		lista = inserirFim(lista);
	}

	imprimirLista(lista);

	excluir(&lista, 467);
	printf("\n------------------------\n");
	imprimirLista(lista);

	excluir(&lista, 169);
	printf("\n------------------------\n");
	imprimirLista(lista);

	excluir(&lista, 41);
	printf("\n------------------------\n");
	imprimirLista(lista);

	return EXIT_SUCCESS;
}
