# cook your dish here
t = int(input())
while t>0:
    count=0
    data = input()
    for i in data:
        if int(i)==4:
            count+=1
    print(count)
    t-=1
