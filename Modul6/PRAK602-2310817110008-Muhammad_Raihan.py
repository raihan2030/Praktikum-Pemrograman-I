jumlah_ruangan = int(input())
zetsu_putih = list(map(int, input().split()))
for i in range(0,jumlah_ruangan,1):
    jumlah = zetsu_putih[i]*(i+1)
    print(jumlah,end=' ')