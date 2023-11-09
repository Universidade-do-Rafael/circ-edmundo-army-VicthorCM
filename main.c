#include "TCircList.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m,n,i;
    TCircList *clist = TCircList_create();

    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
    {
        TCircList_insert(clist,i);
    }
    printf("%d",luck_soldier(clist,m));
    return 0;
}
