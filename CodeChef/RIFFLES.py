tcases=int(input())
while tcases:  
  n,k = map(int, input().split(' '))
  n=n-1
  for i in range(n+1):
      if(2<<i)%n==1:
          ct=i+1
          break

  if ct==k :
      itr=n+1
  elif ct>k:
      itr=(1<<k)%n
  elif ct<k:
      itr=1<<(k%ct)%n

  z=0
  for i in range(n+1):
      print(z+1,end=' ')
      z=(z+itr)%n
      if z==0:
          z=n

  print()
  tcases-=1
