class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,i=0,j=0,n=s.size();
       map<char,int> mapss;
        
        while(i<n && j<n){
            if(mapss[s[j]] == 0){
                mapss[s[j]]=1;
                ans=max(ans,j-i+1);
                j++;
            }else{
                mapss[s[i]]=0;
                i++;
            }
        }
        
        
        
        
        return ans;
        
    }
};