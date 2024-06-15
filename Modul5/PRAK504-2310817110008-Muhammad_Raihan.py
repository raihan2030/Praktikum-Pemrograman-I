def reverse(angka):
    reverse_angka = 0
    while angka>0:
        digit = int(angka) % 10
        reverse_angka = reverse_angka * 10 + digit
        angka /= 10
        angka = int(angka)
    return reverse_angka

a,b = map(int, input().split())
a = reverse(a)
b = reverse(b)
c = a + b
print(reverse(c))