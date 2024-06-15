#include <stdio.h>

void main() {
    char nama[50], nim[50], par[50], ttl[50], adr[100], hob[50], hp[50];
    printf("Nama                : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                 : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel       : ");
    fgets(par, sizeof(par), stdin);
    printf("Tempat/Tanggal Lahir: ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat              : ");
    fgets(adr, sizeof(adr), stdin);
    printf("Hobby               : ");
    fgets(hob, sizeof(hob), stdin);
    printf("No. HP              : ");
    fgets(hp, sizeof(hp), stdin);

    printf("\n");
    printf("Nama                : %s", nama);
    printf("NIM                 : %s", nim);
    printf("Kelas Paralel       : %s", par);
    printf("Tempat/Tanggal Lahir: %s", ttl);
    printf("Alamat              : %s", adr);
    printf("Hobby               : %s", hob);
    printf("No. HP              : %s", hp);
}