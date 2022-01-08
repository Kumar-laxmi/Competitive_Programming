# cook your dish here

t=int(input())
for i in range(t):
    a=[int(x) for x in input().split()]
    b=0
    c=0
    for i in a:
        if(i==1):
            b=b+1
        else:
            c=c+1
    if(b>c):
        print("YES")
    else:
        print("NO")
