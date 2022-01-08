t=int(input())
for i in range(t):
    n,x,p=map(int,input().split())
    score=x*3-(n-x)
    
    if(score>=p):
        print("PASS")
    else:
        print("FAIL")
