#include <stdio.h>

void main(){
    int n1,n2;
    scanf("%d %d", &n1, &n2);
    if(n1!=n2){
        printf("Jumlah tidak sama");
    }
    else{
        int baris1[n1];
        int baris2[n2];
        for(int i=0; i<n1; i++){
            scanf("%d", &baris1[i]);
        }
        for(int i=0; i<n2; i++){
            scanf("%d", &baris2[i]);
        }
        printf("\n");
        for(int i=0; i<n1; i++){
            printf("%d ", baris1[i]*baris2[i]);
        }
    }
}