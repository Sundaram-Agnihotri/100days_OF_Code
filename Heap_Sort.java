class Solution
{
    //Function to build a Heap from array.
     void buildHeap(int arr[], int n)
    {
      for (int i = n/2; i>=0; i--){
            heapify(arr, n , i );
        }  // Your code here
       
    }
 
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)
    {
        int max = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if (left<n && arr[left]> arr[max]){
            max = left;
        }
        if (right <n && arr[right] > arr[max]){
            max = right;
        }
        if (max!=i){
            //swap
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
            heapify(arr, n, max);
        }
        // Your code here
    }
    
    //Function to sort an array using Heap Sort.
    public void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
         
        for (int i = n-1; i>0; i--){
            //swap
            int temp  = arr[0];
            arr[0] = arr[i];
            arr[i] = temp;
            heapify (arr,i, 0);
        }
        //code here
    }
 }
