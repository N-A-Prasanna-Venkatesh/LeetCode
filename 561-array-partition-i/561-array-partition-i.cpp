class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i=1;i<n;i+=2)
            ans+=nums[i];
        return ans;
    }
};