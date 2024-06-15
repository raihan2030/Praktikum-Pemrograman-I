#include <stdio.h>

void main(){
    int baris,kolom;
    scanf("%d %d", &baris, &kolom);
    int matriks[baris][kolom];

    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            scanf("%d", &matriks[j][i]);
        }
    }
    printf("\n");
    for(int i=0; i<baris; i++){
        for(int j=0; j<kolom; j++){
            printf("%d ", matriks[j][i]);
        }
        printf("\n");
    }
}