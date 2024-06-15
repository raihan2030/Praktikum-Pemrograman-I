#include <stdio.h>
#include <math.h>
#define phi 22/7

void main() {
    float jari2,tinggi,l_alas,volume,luas,keliling;
    scanf("%f %f", &jari2,&tinggi);
    l_alas=pow(jari2,2)*phi;
    keliling=2*jari2*phi;
    volume=l_alas*tinggi;
    luas=2*l_alas+keliling*tinggi;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
}