#include "TCircList.h"
#include <stdlib.h>
#include <stdio.h>
// TODO: Implementar os métodos da TCircList.h
 struct node
{
    int info;
    struct node *prox;
};
struct list_
{
    struct node *first;
};



TCircList *TCircList_create()
{
    TCircList * novo=(TCircList*)malloc(sizeof(TCircList));
    if(novo!=NULL)
       novo->first=NULL;
    return novo;
}

bool TCircList_insert(TCircList * a, int num)
{
    NODE * novo=(NODE*)malloc(sizeof(NODE));
    NODE *i=a->first;
    if(novo==NULL)
       return false;
    
    novo->info=num;
    if(a->first==NULL)
        a->first=novo;
    else{
        while (i->prox!=a->first)
        {
              i=i->prox;
        }
         i->prox=novo;       
    }
   novo->prox=a->first;
   return true;
}
bool TCircList_delete(TCircList *a, int num)
{
    NODE *i=a->first;
    NODE *ant=NULL;
    NODE *aux=a->first;
    if(a->first==NULL)
        return false;
    while (i->info!=num)
    {
        ant=i;
        i=i->prox;
    }
    if(ant==NULL)
    {
        while (aux->prox!=a->first)
        {
              aux=aux->prox;
        }
        aux->prox=i->prox;
        a->first=i->prox;
    }
    else 
    {
        ant->prox=i->prox;
    }
    free(i);
    return true;
    
}
void TCircList_print(TCircList *a)
{
    NODE *i=a->first;
    do
    {
        printf("%d ",i->info);
        i=i->prox;
    } while (i!=a->first);
    putchar('\n');
    
}
int luck_soldier(TCircList *a,int jumps)
{
    NODE *aux=a->first;
    NODE *tmp=NULL;

    int i;
    while (nodes(a)!= 1)
    {
        tmp=find_node(aux,jumps);
        aux=tmp->prox;
        TCircList_delete(a,tmp->info);

    }
    aux=a->first;
    return aux->info;
    
}
NODE *find_node(NODE *a,int jumps)
{
    int i;
    NODE *aux=a;
    for(i=1;i<=jumps;i++)
    {
        aux=aux->prox;
    }
    return aux;
}
int nodes(TCircList *a)
{
    NODE *i=a->first;
    int num=1;
    while (i->prox!=a->first)
        {
              i=i->prox;
              num++;
        }
        return num;

}
void TCircList_destroy(TCircList*a)
{
    NODE *i=a->first;
    NODE *tmp;
    if (a->first==NULL)
    {
       exit(1);
    }
    
    while(i->prox!=a->first)
    {
        tmp=i->prox;
        free(i);
        i=tmp;
    }
}