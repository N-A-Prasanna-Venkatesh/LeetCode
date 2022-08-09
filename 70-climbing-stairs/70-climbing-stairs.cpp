class Solution {
public:
    
    map<int,int> dp;
    int f(int i){
        if(dp[i]!=0) return dp[i];
        dp[i] = f(i-1)+f(i-2);
        cout<<i<<dp[i]<<endl;;
        return dp[i];
    }

    
    int climbStairs(int n) {
        dp[0]=1;
        dp[1]=1;
        
        return f(n);
        
    }
};