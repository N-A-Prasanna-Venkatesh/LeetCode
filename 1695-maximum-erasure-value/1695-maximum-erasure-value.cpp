class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        map<int,int> vis;
        int i=0,j=0;
        int maxi=-1,suma=0;
        int n=nums.size();
        while(i<n && j<n){
            if(vis[nums[j]]==0){
                suma+=nums[j];
                vis[nums[j]]=1;
                j++;
                maxi=max(maxi,suma);
            }else{
                suma-=nums[i];
                vis[nums[i]]=0;
                i++;
            }      
        }
       return maxi; 
    }
};