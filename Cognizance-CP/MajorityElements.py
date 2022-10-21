def BinarySum(x):
    n = str(bin(x))
    one_count = 0
    for i in n:
        if i == "1":
            one_count+=1
    return one_count

(k, n) = map(int, input().split(' '))

arr = [int(item) for item in input().split()]

freq = set(arr)
flag = False

for i in freq:
    if (arr.count(i) >= len(arr)//2) and (BinarySum(i) >= k):
        flag = True
        print(i)
        break

if flag == False:
    print("-1")
