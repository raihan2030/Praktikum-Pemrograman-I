#include <stdio.h>

void main () {
    int a,b,c,keliling,tanah,biaya;
    a=4,b=5,c=7;
    keliling=a+b+c;
    tanah=85000;
    biaya=keliling*tanah;
    printf("Diketahui:\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a,b,c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", tanah);
    printf("Jawaban:\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya);
}