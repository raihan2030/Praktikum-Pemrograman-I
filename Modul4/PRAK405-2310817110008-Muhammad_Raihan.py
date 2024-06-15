n,k = map(int, input().split())
hasil=0; total=0
for i in range(1, n+1, 1):
    for j in range(i, 0, -1):
        print("({} * {})".format(j,k),end=' ')
        if j>1:
            print("+",end=' ')
        else:
            print("=",end=' ')
        if j==i:
            s = j*k
            hasil = hasil+s
    print(hasil)
    total = total+hasil
print(total)