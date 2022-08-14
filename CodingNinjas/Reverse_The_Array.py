def reverseArray(arr, m):
    # Write your code here.
    return arr[:m+1] + arr[m+1:][::-1]
