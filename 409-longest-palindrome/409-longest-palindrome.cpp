class Solution {
public:
    int longestPalindrome(string s) {
        //changed code after seeing discuss.
        map<char,int> cnts;
        for(auto i : s){
            cnts[i]++;
        }
        int cnt=0;
        for(auto i : cnts)
            if(i.second%2!=0)
                cnt++;
        if(cnt>0) return s.size()-cnt+1;
        return s.size();        
    }
};