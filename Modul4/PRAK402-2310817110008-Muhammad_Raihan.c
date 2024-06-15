#include <stdio.h>

void main ()
{
    int i,x;
    scanf("%d", &x);
    for(i=1; i<=x; i+=2) {
        printf("%d ", i);
    }
    printf("\n");
    if((x%2)!=0) {
        x=x-1;
    }
    for(i=x; i>=1; i-=2) {
        printf("%d ", i);
    }
}