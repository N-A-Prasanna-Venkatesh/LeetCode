class Solution {
public:
    bool isValid(string s) {
        bool ans=true;
        vector<char> a;
        map<char,char> mapi;
        mapi[')'] = '(';
        mapi[']'] = '[';
        mapi['}'] = '{';
        
        for(auto i : s){
            if(i=='(' || i=='[' || i=='{'){
                a.push_back(i);
            }else{
                if(a.empty())
                    return false;
                if(a.back() == mapi[i]){
                    a.pop_back();
                }else{
                    ans=false;
                    break;
                }
            }
        }
        if(a.size()!=0)
            ans=false;
        
        return ans;
    }
};