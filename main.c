#include "TCircList.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int m,n,i;
    TCircList *clist = TCircList_create();

    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        TCircList_insert(clist,i);
    }
    printf("%d",luck_soldier(clist,m));
    TCircList_destroy(clist);
    return 0;
}
