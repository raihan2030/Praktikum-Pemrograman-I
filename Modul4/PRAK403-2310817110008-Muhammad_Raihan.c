#include <stdio.h>

void main ()
{
    int a,b,i,j;
    scanf("%d %d", &a,&b);
    if (a<b) {
        j = b;
        for(i=a; i<=b; i++) {
            printf("%d ", i);
            printf("%d ", j);
            j = j-1;
            if(i!=b) {
                printf("- ");
            }
        }
    }
    else if (a>b) {
        j = b;
        for(i=a; i>=b; i--) {
            printf("%d ", i);
            printf("%d ", j);
            j = j+1;
            if(i!=b) {
                printf("- ");
            }
        }
    }
}