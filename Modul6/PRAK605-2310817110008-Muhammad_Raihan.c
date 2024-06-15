#include <stdio.h>

void main(){
    int ordo;
    scanf("%d", &ordo);
    int matriks_A[ordo][ordo], matriks_B[ordo][ordo];
    
    printf("Matriks A\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            scanf("%d", &matriks_A[i][j]);
        }
    }

    printf("Matriks B\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            scanf("%d", &matriks_B[i][j]);
        }
    }

    printf("Matriks A X B\n");
    for(int i=0; i<ordo; i++){
        for(int j=0; j<ordo; j++){
            int elemen=0;
            for(int k=0; k<ordo; k++){
                elemen += matriks_A[i][k]*matriks_B[k][j];
            }
            printf("%d ", elemen);
        }
        printf("\n");
    }
}