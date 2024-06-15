x = int(input())
for i in range(1, x+1, 2):
    print(i,end=' ')
print("")
if (x%2)!=0:
    x-=1
for i in range(x, 0, -2):
    print(i,end=' ')