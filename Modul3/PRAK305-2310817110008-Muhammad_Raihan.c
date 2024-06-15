#include <stdio.h>
#include <math.h>

void main () {
    int detik,menit,jam,hari,det_1hari;
    scanf("%d", &detik);
    det_1hari=24*pow(60,2);
    hari = detik/det_1hari;
    if (detik>=det_1hari) {
        printf("%d hari ", hari);
    }
    detik = detik - det_1hari*hari;
    jam = detik/pow(60,2);
    detik = detik - (pow(60,2)*jam);
    menit = detik/60;
    detik = detik - 60*menit;
    printf("%02d:%02d:%02d", jam,menit,detik);
}