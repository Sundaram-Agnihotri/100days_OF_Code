class Solution {
public:
    bool isCircularSentence(string s) {
            // vector<string>ans;
        char ch;
        if(s[0] != s[s.size() -1]) return false;
        for(int i = 0 ; i < s.size()-1 ; i++){
            if(s[i] == ' '){
                if(s[i-1] == s[i+1]) continue;
                else return false;
            }
        }
        return true;
    }
};
