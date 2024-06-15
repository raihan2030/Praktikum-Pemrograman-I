#include <stdio.h>

void main () {
    float putaran,jarak,keliling,phi,jari2;
    putaran=5, jarak=14, phi=3.14;
    keliling=jarak/putaran;
    jari2=keliling/(2*phi);
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n", jarak);
    printf("Jawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari2);
}