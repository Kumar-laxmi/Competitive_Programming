# cook your dish here
t = int(input())
for i in range(0,t):
    (first, second, third) = map(str, input().split(' '))
    (x, y) = map(str, input().split(' '))
    if x==first or y==first:
        print(first)
    elif x==second or y==second:
        print(second)
    else:
        print(third)
