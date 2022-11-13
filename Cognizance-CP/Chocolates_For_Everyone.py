n = int(input())
(x, y) = map(int, input().split(' '))

flag = False

if (n % y) % x == 0 and n // y > 0:
    print(n//y)
else:
    print("-1")
