def maksimal(a,b):
    if a>b: return a
    else: return b
def minimal(a,b):
    if a<b: return a
    else: return b

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
nilai = input()
x = nilai.split()
arr = []
for list_x in x:
    list_x = int(list_x)
    arr.append(list_x)
while batas<bilangan:
    nilai = arr[batas]
    maks = maksimal(maks,nilai)
    minim = minimal(minim,nilai)
    batas += 1
print(maks,minim)