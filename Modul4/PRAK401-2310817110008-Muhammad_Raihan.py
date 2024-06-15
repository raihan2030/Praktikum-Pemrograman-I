a,b = map(str, input().split())
a = int(a)
for i in range(50):
    if ((i+1) % a)!=0:
        print(i+1, end=' ')
    else:
        print(b, end=' ')
        continue