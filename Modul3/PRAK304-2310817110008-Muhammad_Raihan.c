#include <stdio.h>

void main () {
    int a;
    scanf("%d", &a);
    if (a>=0 && a<100) {
        if (a>=1 && a<=9) {
            printf("Satuan");
        }
        else if (a>=11 && a<=19) {
            printf("Belasan");
        }
        else if ((a>=20 && a<=99) || (a==10)) {
            printf("Puluhan");
        }
        else {
            printf("Nol");
        }
    }
    else if (a>=100) {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
}