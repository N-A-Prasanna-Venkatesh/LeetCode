class Solution {
public:
    bool winnerOfGame(string c) {
        int ca=0,cb=0;
        if(c.length()<=2) return false;
        for(int i=1;i<c.length()-1;i++)
            if(c[i-1] == c[i] && c[i] == c[i+1]){
                if(c[i] == 'A')ca+=1;
                else cb+=1;
            }
        return ca>cb;
    }
};