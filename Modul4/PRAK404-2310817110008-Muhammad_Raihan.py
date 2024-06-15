t = "Pertambahan"
m = "Pengurangan"
x = "Perkalian"
b = "Pembagian"
ex = "Exit"
while True:
    print("Pilih program")
    print("1.",t)
    print("2.",m)
    print("3.",x)
    print("4.",b)
    print("5.",ex)
    i = int(input("Masukkan Pilihan: "))
    if i>=1 and i<=4:
        nil1 = int(input("Masukkan nilai pertama: "))
        nil2 = int(input("Masukkan nilai kedua: "))
        if i==1:
            hasil = nil1+nil2
            print("Hasil {} antara {:.2f} dengan {:.2f} adalah {:.2f}".format(t,nil1,nil2,hasil))
            print("==================================================")
        elif i==2:
            hasil = nil1-nil2
            print("Hasil {} antara {:.2f} dengan {:.2f} adalah {:.2f}".format(m,nil1,nil2,hasil))
            print("==================================================")
        elif i==3:
            hasil = nil1*nil2
            print("Hasil {} antara {:.2f} dengan {:.2f} adalah {:.2f}".format(x,nil1,nil2,hasil))
            print("==================================================")
        elif i==4:
            hasil = nil1/nil2
            print("Hasil {} antara {:.2f} dengan {:.2f} adalah {:.2f}".format(b,nil1,nil2,hasil))
            print("==================================================")
    elif i==5:
        print("Terima kasih, telah menggunakan kalkulator Muhammad Raihan :)")
        break
    else:
        print("Input Anda salah, silahkan coba lagi")
        print("==================================================")