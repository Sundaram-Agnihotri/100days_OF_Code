class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        int adj_count=0;
        if(arr.size()==1 && arr[0]==0)
        {
            adj_count++;
            return adj_count>=n;
        } 
        int n1=arr.size();
        if(arr[0]==0 && arr[1]==0){
             adj_count++;
             arr[0]=1;
        }
        if(arr[n1-1]==0 && arr[n1-2]==0 && arr.size()>2){
             adj_count++;
             arr[n1-1]=1;
        }
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i-1]==0 && arr[i]==0 && arr[i+1]==0)
            {
                adj_count++;
                arr[i]=1;
            }
        }
        
        return adj_count>=n;
    }
};
