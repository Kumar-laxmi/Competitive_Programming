t = int(input())

for i in range(0,t):
    t1,t2,r1,r2 = [int(x) for x in input().split()]
    const1 = (t1*t1)/(r1*r1*r1)
    const2 = (t2*t2)/(r2*r2*r2)
    
    if const1==const2:
        print("Yes")
    else:
        print("No")
