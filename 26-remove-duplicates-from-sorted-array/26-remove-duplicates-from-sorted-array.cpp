class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> vals;
        for(auto i: nums){
            vals[i]+=1;
        }
        int k=0;
        nums.clear();
        for(auto i : vals){
            nums.push_back(i.first);
            k+=1;
        }
        
        return k;
    }
};