class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int n=piles.size();
        priority_queue<int>maxHeap;
        for(int i=0;i<n;i++)
        {
            maxHeap.push(piles[i]);
        }

        while(k--)
        {
            int max_element=maxHeap.top();
            max_element=max_element-floor(maxHeap.top()/2);
            maxHeap.pop();
            maxHeap.push(max_element);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=maxHeap.top();
            maxHeap.pop();
        }
        return sum;
        
    }
};
