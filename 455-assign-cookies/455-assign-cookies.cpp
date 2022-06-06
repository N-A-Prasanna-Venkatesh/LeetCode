class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans=0;
        
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int n1=s.size();
        
        int i=0,top=0;;
        while(i<n){
            if(top==n1)break;
            if(g[i]<=s[top]){
                i++;
                ans++;
                top++;
            }else{
                top++;
            }
        }
        
        return ans;
    }
};