class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=true;
        
        if(x<0)
            return false;
        vector<int> digits;
        while(x){
            digits.push_back(x%10);
            x=x/10;
        }
        int n=digits.size();
        for(int i=0;i<n;i++){
            if(digits[i]!=digits[n-i-1]){
                ans=false;
                break;
            }
        }
        
        return ans;
    }
};