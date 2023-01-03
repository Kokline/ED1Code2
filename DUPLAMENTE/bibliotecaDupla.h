#ifndef BIBLIOTECADUPLA_H_
#define BIBLIOTECADUPLA_H_

struct dupla{
	int codigo;

	struct dupla *anterior;
	struct dupla *proximo;
};

typedef struct dupla dadosDupla;

dadosDupla* inserirInicio(dadosDupla *listaDupla);
void imprimirLista(dadosDupla *tmp);
dadosDupla* inserirFim(dadosDupla *listaDupla);
void excluir(dadosDupla **lista, int cod);


#endif
