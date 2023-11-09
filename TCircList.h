#ifndef TCIRCULAR_LIST_H
#define TCIRCULAR_LIST_H
#include <stdbool.h>

typedef struct list_ TCircList;
typedef struct node NODE;
/*
 * Cria instâncias de listas circulares.
 *@return TCircList* endereço para a área alocada e inicializada ou NULL em caso
 *de falha.
 */
TCircList *TCircList_create();
/*
 * Insere no final da lista.
 * @param TCircList* endereço da lista para qual se deseja realizar a inserção
 * @param int o valor inteiro que se deseja inserir na lista.
 * @return bool Informando o sucesso ou falha na operação.
 */
bool TCircList_insert(TCircList *, int);
/*
 * Imprime a lista circular.
 * @param TCircList* endereço para uma lista circular válida.
 */
void TCircList_print(TCircList *);
bool TCircList_delete(TCircList *,int);
int luck_soldier(TCircList *,int);
NODE *find_node(NODE *,int);
int nodes(TCircList *);
void TCircList_destroy(TCircList*);
#endif