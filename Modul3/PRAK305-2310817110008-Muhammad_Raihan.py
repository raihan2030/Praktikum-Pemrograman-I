det1 = int(input())
det_1hari = 24*pow(60,2)
hari = det1/det_1hari
detik = det1 - (det_1hari*int(hari))
jam = detik/pow(60,2)
detik = detik - (int(jam)*pow(60,2))
menit = detik/60
detik = detik - (60*int(menit))
if det1>=det_1hari:
    print("{:d} hari {:02d}:{:02d}:{:02d}".format(int(hari),int(jam),int(menit),int(detik)))
else:
    print("{:02d}:{:02d}:{:02d}".format(int(jam),int(menit),int(detik)))