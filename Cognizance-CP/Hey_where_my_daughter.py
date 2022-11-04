(n, m) = map(int, input().split(' '))

arr = []
result = []

for _ in range(n):
    temp = input().split(" ")
    arr.append(temp)

for i in range(n):
    for j in range(m):
        if arr[i][j] == 'R' or arr[i][j] == 'r':
            print("{} {}".format(i, j))
            break
        else:
            continue
