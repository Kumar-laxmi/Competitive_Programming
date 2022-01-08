# cook your dish here
t = int(input())

for i in range(0,t):
    a, b = map(int, input().split(' '))
    c = [max(a,b),a+b]
    print(*c)
