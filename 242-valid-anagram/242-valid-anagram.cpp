class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> a;
        for(auto i : s) a[i]++;
        for(auto i : t) a[i]--;
        for(auto i : a)
            if(i.second !=0) return false;
        return true;
        
    }
};