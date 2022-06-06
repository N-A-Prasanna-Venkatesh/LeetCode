class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev=-2,curr=-2,val=0;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i] == 1){
                prev=curr;
                curr=i;
                int temp=(curr-prev-2)/2;
                if(temp>0)
                val+=temp;
            }
        }
        prev=curr;
        curr=flowerbed.size()+1;
        int temp=(curr-prev-2)/2;
                if(temp>0)
                val+=temp;
        
        if(val >=n)
            return true;
        return false;
    }
};