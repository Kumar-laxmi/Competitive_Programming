n = int(input())
x = input()

result = 0
for i in range(len(x) - 1, -1, -1):
    if x[i] == "1":
        break
    result += 1

print(result)
