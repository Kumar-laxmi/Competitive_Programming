// Selection Sort

void selectionSort(int arr[], int n)
{
  //code here
  for(int i=0;i<n-1;i++) {
      int key = i;
      for(int j=i+1;j<n;j++) {
          if(arr[j]<arr[key]) {
              key = j;
          }
      }
      int temp = arr[key];
      arr[key] = arr[i];
      arr[i] = temp;
  }
}
