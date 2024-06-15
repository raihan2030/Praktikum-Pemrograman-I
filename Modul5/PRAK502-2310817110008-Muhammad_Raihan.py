def mutlak(x):
    if x<0: return x*-1
    else: return x
def hitung(y,z):
    return mutlak(y-z)

a,c,b,d = map(int, input().split())
hasil = hitung(a,b)+hitung(c,d)
print(hasil)