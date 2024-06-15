#include <stdio.h>

void Biodata(int tahunLahir, char Nama[], char Asal[]) {
    int tahun_sekarang = 2023;
    printf("====================================\n");
    printf("Perkenalkan Nama Saya: %s\n", Nama);
    int usia = tahun_sekarang - tahunLahir;
    printf("Umur Saya: %d\n", usia);
    printf("Saya adalah Angkatan: %d\n", tahun_sekarang);
    printf("Asal Saya Dari: %s\n", Asal);
}
int main() {
    int tahunLahir;
    char Namaku[20], Asal[15];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", &Namaku);
    scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}