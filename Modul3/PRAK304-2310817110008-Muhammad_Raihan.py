a = int(input())
if a>=0 and a<100:
    if a>=1 and a<=9:
        print("Satuan")
    elif a>=11 and a<=19:
        print("Belasan")
    elif (a==10) or (a>=20 and a<=99):
        print("Puluhan")
    else:
        print("Nol")
elif a>=100:
    print("Anda Menginput Melebihi Limit Bilangan")