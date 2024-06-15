ordo = int(input())
matriks_A = []
matriks_B = []

print("Matriks A")
for i in range(0, ordo, 1):
    baris = list(map(int, input().split()))
    matriks_A.append(baris)

print("Matriks B")
for i in range(0, ordo, 1):
    baris = list(map(int, input().split()))
    matriks_B.append(baris)

print("Matriks A X B")
for i in range(0, ordo, 1):
    for j in range(0, ordo, 1):
        elemen = 0
        for k in range(0, ordo, 1):
            elemen += matriks_A[i][k]*matriks_B[k][j]
        print("{}".format(elemen),end=' ')
    print("")