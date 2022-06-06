class Solution {
public:
    int longestPalindrome(string s) {
        int ans=0;
        map<char,int> cnts;
        for(auto i : s){
            cnts[i]+=1;
        }
        int flag=0;
        for(auto i : cnts){
            if(i.second%2==0)
                ans+=i.second;
            else{
                ans+=i.second-1;
                flag=1;
            }
        }
        if(flag==1)
            ans+=1;
        
        return ans;        
    }
};