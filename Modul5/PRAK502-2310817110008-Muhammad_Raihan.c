#include <stdio.h>

int mutlak(int angka){
    if (angka < 0) {
        return angka*-1;
    }
    else {
        return angka;
    }
}
int hitung(int nilai1, int nilai2){
    return mutlak(nilai1-nilai2);
}
int main()
{
int a,b,c,d;
    scanf("%d %d %d %d",&a,&c,&b,&d);
    int Hasil = hitung(a,b) + hitung(c,d);
    printf("%d", Hasil);
    return 0;
}