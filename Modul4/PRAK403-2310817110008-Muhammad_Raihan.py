a,b = map(int,input().split())
if a>b:
    j=b
    for i in range(a, b-1, -1):
        print(i,end=' ')
        print(j,end=' ')
        if i!=b:
            print("-",end=' ')
        j+=1
elif a<b:
    j=b
    for i in range(a, b+1, 1):
        print(i,end=' ')
        print(j,end=' ')
        if i!=b:
            print("-",end=' ')
        j-=1