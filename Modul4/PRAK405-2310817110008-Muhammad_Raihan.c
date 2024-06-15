#include <stdio.h>

void main ()
{
    int n,k,i,j,s,hasil=0,total=0;
    scanf("%d %d", &n,&k);
    for(i=1; i<=n; i++) {
        for(j=i; j>=1; j--) {
            printf("(%d * %d)", j,k);
            if (j>1) {
                printf(" + ");
            }
            else {
                printf(" = ");
            }
            if (j==i) {
                s = j*k;
                hasil = hasil + s;
            }
        }
        printf("%d\n", hasil);
        total = total + hasil;
    }
    printf("%d", total);
}