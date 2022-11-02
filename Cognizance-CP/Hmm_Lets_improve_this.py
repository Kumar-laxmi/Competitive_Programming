n = int(input())

pattern = ['0']*n + ['1']*n + ['0']*n

for i in range(0,n):
    print('  '.join(pattern))
    del pattern[n-1]
    del pattern[2*n - 1]
    pattern.insert(0, '1')
    pattern.append('1')
