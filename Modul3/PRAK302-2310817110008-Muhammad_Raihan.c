#include <stdio.h>

void main () {
    int a;
    scanf("%d", &a);
    if (a>=80) {
        printf("A");
    }
    else if (a>=70 && a<=79) {
        printf("B");
    }
    else if (a>=60 && a<=69) {
        printf("C");
    }
    else if (a>=50 && a<=59) {
        printf("D");
    }
    else {
        printf("E");
    }
}