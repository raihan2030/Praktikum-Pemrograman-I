def Biodata(tahunLahir, Nama, Asal):
    tahun_sekarang = 2023
    print("====================================")
    print("Perkenalkan Nama Saya: {}".format(Nama))
    umur = tahun_sekarang-tahunLahir
    print("Umur Saya: {}".format(umur))
    print("Saya Adalah Angkatan: {}".format(tahun_sekarang))
    print("Asal Saya Dari: {}".format(Asal))
    
tahunLahir = int(input())
Namaku = input()
Asal = input()
Biodata(tahunLahir, Namaku, Asal)