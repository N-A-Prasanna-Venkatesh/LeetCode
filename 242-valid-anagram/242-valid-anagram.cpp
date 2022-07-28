class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        int counter[26]={};
        for(int i =0;i<s.size();i++){
            counter[s[i]-'a']++;
            counter[t[i]-'a']--;
        }
        for(auto i : counter)
            if(i!=0) return false;
        return true;
        
    }
};