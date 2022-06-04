class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        
        int n=201,val=0;
        for(auto i : strs){
            val = i.size();
            if(val < n){
                n=val;
            }
        }
        int ntot=strs.size();
        int flag=0;
        char first;
        for(int i=0;i<n;i++){
            first = strs[0][i];
            for(int j=0;j<ntot;j++){
                if(strs[j][i]!=first){
                    flag=1;
                    break;
                }
                if(j==ntot-1){
                    ans+=first;
                }
            }
            if(flag == 1)
                break;
            
        }
        
        return ans;
    }
};