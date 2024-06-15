#include <stdio.h>

int reverse(int angka) {
    int reverse_angka = 0;
    while (angka > 0) {
        int digit = angka % 10;
        reverse_angka = reverse_angka * 10 + digit;
        angka /= 10;
    }
    return reverse_angka;
}
int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    A = reverse(A);
    B = reverse(B);
    int C = A + B;
    printf("%d", reverse(C));
    return 0;
}