#include <stdio.h>

void main ()
{
    float i,nil1,nil2,hasil;
    char t[] = "Pertambahan", x[] = "Perkalian",
    m[] = "Pengurangan", b[] = "Pembagian",
    exit[] = "Exit";
    while (1)
    {
        printf("Pilih program\n");
        printf("1. %s\n", t);
        printf("2. %s\n", m);
        printf("3. %s\n", x);
        printf("4. %s\n", b);
        printf("5. %s\n", exit);
        printf("Masukkan Pilihan: ");
        scanf("%f", &i);
        if (i==5) {
            printf("Terima kasih, telah menggunakan kalkulator Muhammad Raihan :)");
            break;
        }
        else if (i<=4 && i>=1) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &nil1);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &nil2);
            if (i==1) {
                hasil = nil1+nil2;
                printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", t,nil1,nil2,hasil);
                printf("\n===============================================\n");
            }
            else if (i==2) {
                hasil = nil1-nil2;
                printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", m,nil1,nil2,hasil);
                printf("\n==================================================\n");
            }
            else if (i==3) {
                hasil = nil1*nil2;
                printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", x,nil1,nil2,hasil);
                printf("\n==================================================\n");
            }
            else if (i==4) {
                hasil = nil1/nil2;
                printf("Hasil %s antara %.2f dengan %.2f adalah %.2f", b,nil1,nil2,hasil);
                printf("\n==================================================\n");
            }
        }
        else {
            printf("Input Anda salah, silahkan coba lagi");
            printf("\n==================================================\n");
        }
    }
}