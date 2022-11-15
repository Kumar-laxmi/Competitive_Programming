n = int(input())
arr = [int(item) for item in input().split(' ')]

flag = False

for i in range(0, len(arr)-1):
    if arr[i] == max(arr[i:len(arr)-1]) and arr.count(arr[i]) == 1:
        flag = True
        print(arr[i], end=" ")

if arr.count(arr[len(arr)-1]) == 1:
    flag = True
    print(arr[len(arr)-1])

if flag == False:
    print("-1")
