class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        vector<int> temp;
        int i_val=matrix[0].size();
        int j_val=matrix.size();
        for(int i=0;i<i_val;i++){
            temp.clear();
            for(int j=0;j<j_val;j++){
                temp.push_back(matrix[j][i]);
            }
            ans.push_back(temp);
        }
        
        
        return ans;
    }
};