import math

a,b = map(int, input().split())
c = math.sqrt(pow(b,2)-pow(a,2))
kel = a+b+c
luas = 0.5*c*a
print("Alas = {:g} cm".format(c))
print("Tinggi =  {:g} cm".format(a))
print("Keliling = {:g} cm".format(kel))
print("Luas = {:g} cm^2".format(luas))