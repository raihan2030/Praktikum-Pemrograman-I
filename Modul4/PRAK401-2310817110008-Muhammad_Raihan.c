#include <stdio.h>

void main () 
{
    int a,i;
    char b;
    scanf("%d %c", &a,&b);
    for(i=1;i<=50;i++) 
    {
        if((i % a)!=0)
        {
            printf("%d ", i);
        }
        else
        {
            printf("%c ", b);
            continue;
        }
    }
}