#include <stdio.h>
#include <string.h>

void main(){
    char kode[100],pesan[100];
    scanf("%[^\n]%*c", &kode);
    scanf("%[^\n]%*c", &pesan);
    int length1 = strlen(kode);
    int length2 = strlen(pesan);
    if(length1!=length2){
        printf("Panjang kalimat berbeda, pesan palsu");
    }
    else{
        int jumlah_bintang=0;
        int jumlah_pagar=0;
        for (int i = 0; i < length1; i++)
        {
            if(kode[i] == pesan[i] && kode[i] !=' '){
                printf("*");
                jumlah_bintang++;
            }
            else if(kode[i] == ' ' && pesan[i] == ' '){
                printf(" ");
            }
            else{
                printf("#");
                jumlah_pagar++;
            }
        }
        printf("\n");
        printf("* = %d\n", jumlah_bintang);
        printf("# = %d\n", jumlah_pagar);
        if(jumlah_bintang>=jumlah_pagar){
            printf("Pesan Asli");
        }
        else{
            printf("Pesan Palsu");
        }
    }
}