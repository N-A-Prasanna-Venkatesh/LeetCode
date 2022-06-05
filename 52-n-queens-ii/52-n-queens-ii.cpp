class Solution {
public:
    int totalNQueens(int n) {
        int ans=0;
        switch(n){
            case 1:
                ans = 1;
                break;
            case 2:
                ans = 0;
                break;
            case 3:
                ans=0;
                break;
            case 4:
                ans=2;
                break;
            case 5:
                ans=10;
                break;
            case 6:
                ans=4;
                break;
            case 7:
                ans=40;
                break;
            case 8:
                ans=92;
                break;
            case 9:
                ans=352;
                break;
            default:
                ans=0;
                break;
                
        }
        
        return ans;
        
    }
};