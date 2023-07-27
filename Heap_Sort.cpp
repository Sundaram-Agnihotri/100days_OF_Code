void heapify(int arr[], int n, int i)  
    {
        int large = i;
        int l = 2*i+1;
        int r = 2*i+2;
        
        if(l<n && arr[large]<arr[l]) large=l;
        if(r<n && arr[large]<arr[r]) large=r;
         
      
      if(large!=i){
          swap(arr[large],arr[i]);
          heapify(arr,n,large);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2-1;i>=0;i--)
            heapify(arr,n,i);
    }
    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        int size = n;
        
        for(int i=n-1;i>=0;i--){
            swap(arr[0],arr[i]);
            heapify(arr,i,0);
        }
    }
