def findDuplicate(arr:list, n:int):
    # Write your code here.
    # Returns an integer.
    arr.sort()
    
    for i in range(0,len(arr)-1):
        if arr[i] == arr[i+1]:
            return arr[i]
