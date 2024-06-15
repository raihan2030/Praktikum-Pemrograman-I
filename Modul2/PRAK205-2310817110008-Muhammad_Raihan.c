#include <stdio.h>
#include <math.h>
#define phi 22/7

void main() {
    int A,B,C,keliling,luas;
    scanf("%d %d", &A,&B);
    C=sqrt(pow(B,2)-pow(A,2));
    keliling=A+B+C;
    luas=0.5*C*A;
    printf("Alas = %d cm\n", C);
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n\n", luas);
}