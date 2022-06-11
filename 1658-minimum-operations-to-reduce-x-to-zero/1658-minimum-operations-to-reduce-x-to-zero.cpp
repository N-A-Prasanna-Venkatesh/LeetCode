class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int n = nums.size(),len=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        
        int target = sum - x;
        
        if(target==0) return n;
        
        if(target < 0) return -1;
        
        int i=0,l=0,sm=0;
        
       for(int i=0;i<n;i++){
            sm+=nums[i];
            while (sm > target && l <= i) { 
                sm = sm - nums[l]; 
                    l++; 
                } 
             if(sm==target){
                len = max(len,i-l+1);
            }
        }
        if(len==0) return -1;
        return n-len; 
        
    }
};