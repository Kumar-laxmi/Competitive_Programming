def sumInRanges(arr, n, queries, q):

   m = 10**9 + 7
   ans = []

   new = [0]*(n + 1)

   for i in range(n):
       new[i+1] = (new[i] + arr[i]) % m

   for i in range(q):
       left = queries[i][0] - 1
       right = queries[i][1]

       leftSum = ((new[n] * (left // n)) % m + new[left % n]) % m
       rightSum = ((new[n] * (right // n)) % m + new[right % n]) % m

       ans.append((m + rightSum - leftSum) % m)

   return ans
