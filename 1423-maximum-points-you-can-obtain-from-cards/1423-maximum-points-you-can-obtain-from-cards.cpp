class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int nums=n-k;
        int i=0,j=nums;
        int tot_sum=accumulate(cardPoints.begin(),cardPoints.end(),0);
        int suma=accumulate(cardPoints.begin(),cardPoints.begin()+nums,0);
        int mini=suma;
        while(j<n){
            suma-=cardPoints[i];
            suma+=cardPoints[j];
            mini=min(suma,mini);
            i++;
            j++;
        }
        return tot_sum-mini;
    }
};