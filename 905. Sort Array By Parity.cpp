class Solution {
public:
  vector<int> sortArrayByParity(vector<int>& A) {
    vector<int> even, odd;
    
    for (auto n: A) {
      if (n % 2 == 1) {
        odd.push_back(n);
      } else {
        even.push_back(n);
      }
    }
    
    for (auto n: odd) {
      even.push_back(n);
    }
    
    return even;
  }
};
