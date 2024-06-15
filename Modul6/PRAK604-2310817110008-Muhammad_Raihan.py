kode = input()
pesan = input()
length1 = len(kode)
length2 = len(pesan)
if length1!=length2:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    jumlah_bintang = 0
    jumlah_pagar = 0
    for i in range(0, length1, 1):
        if kode[i]==pesan[i] and kode[i]!=' ':
            print("*",end='')
            jumlah_bintang += 1
        elif kode[i]==' ' and pesan[i]==' ':
            print(" ",end='')
        else:
            print("#",end='')
            jumlah_pagar += 1
    print("")
    print("* = {}".format(jumlah_bintang))
    print("# = {}".format(jumlah_pagar))
    if jumlah_bintang>=jumlah_pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")