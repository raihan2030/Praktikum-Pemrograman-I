#include <stdio.h>

void main () {
    int A,B,discA,discB;
    A=400000,B=350000;
    discA=A-(A*13/100);
    discB=B-(B*21/100);
    printf("Harga sepatu A adalah %d\n", A);
    printf("Harga sepatu B adalah %d\n", B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", discA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", discB);
}