class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> ans;
        
        int n=nums.size();
        int val,val1;
        map<int,int> complement;
        
        for(int i=0;i<n;i++){
        	complement[nums[i]] = i ;
        }
        
        for(int i=0;i<n;i++){
        	//val1=target-nums[i];
        	val=complement[target-nums[i]];
        	if(val > i){
                ans.push_back(i);
                ans.push_back(val);
                break;
            }
        }
        return ans;
    }
};