# cook your dish here
for _ in range(int(input())):
    # Enter your code here
    (a,b) = map(int,input().split(' '))
    sum = a+b
    count = 0
    while sum!=0:
        rem = sum%10
        if rem==0:
            count+=6
        elif rem==1:
            count+=2
        elif rem==2:
            count+=5
        elif rem==3:
            count+=5
        elif rem==4:
            count+=4
        elif rem==5:
            count+=5
        elif rem==6:
            count+=6
        elif rem==7:
            count+=3
        elif rem==8:
            count+=7
        elif rem==9:
            count+=6
        
        sum = int(sum/10)
    print(count)
