class Solution {
public:
    bool winnerOfGame(string c) {
        map<char,int> chances;
        int len = c.length();
        if(len<=2) return false;
        for(int i=1;i<len-1;i++)
            if((c[i-1] == c[i]) && (c[i] == c[i+1])){
                chances[c[i]]++;
            }
        if(chances['A'] > chances['B']) return true;
        return false;
    }
};