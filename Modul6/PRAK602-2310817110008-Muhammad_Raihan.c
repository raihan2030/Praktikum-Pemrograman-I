#include <stdio.h>

void main(){
    int jumlah_ruangan;
    scanf("%d", &jumlah_ruangan);
    int zetsu_putih[jumlah_ruangan];
    for(int i=0; i<jumlah_ruangan; i++){
        scanf("%d", &zetsu_putih[i]);
    }
    for(int i=0; i<jumlah_ruangan; i++){
        printf("%d ", zetsu_putih[i]*(i+1));
    }
}