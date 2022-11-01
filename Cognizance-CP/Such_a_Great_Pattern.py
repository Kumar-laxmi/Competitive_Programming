n = int(input())

start = ['0'] + ['1']*n + ['0']*n

for i in range(0,n):
    print(' '.join(start))
    start = ['0'] + start[:-1]
