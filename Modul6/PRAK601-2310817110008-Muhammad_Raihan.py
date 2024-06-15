matriks = []
baris,kolom = map(int, input().split())
data = list(map(int, input().split()))
for i in range(0,baris,1):
    elemen = []
    for j in range(0,kolom,1):
        elemen.append(data[j+(i*kolom)])
    matriks.append(elemen)

print("")
for i in range(0,baris,1):
    for elemen in matriks[i]:
        print(elemen,end=' ')
    print("")