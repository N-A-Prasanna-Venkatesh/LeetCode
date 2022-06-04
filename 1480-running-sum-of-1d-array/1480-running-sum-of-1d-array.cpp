class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int suma=0;
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            suma+=nums[i];
            ans.push_back(suma);
        }
        return ans;
    }
};