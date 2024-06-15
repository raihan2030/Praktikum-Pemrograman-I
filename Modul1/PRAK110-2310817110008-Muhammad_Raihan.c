#include <stdio.h>
#include <math.h>

void main () {
    int a,t,A,B,C,keliling,luas;
    a=5,t=12,A=t,C=a;
    B=sqrt(pow(A,2)+pow(C,2));
    keliling=A+B+C;
    luas=(a*t)/2;

    printf("Diketahui:\n");
    printf("Alas = %d cm\n", a);
    printf("Tinggi = %d cm\n\n", t);
    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", A);
    printf("Sisi B = %d cm\n", B);
    printf("Sisi C = %d cm\n", C);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm", luas);
}