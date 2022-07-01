class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int ts) {
        map<int,int> map1;
        vector<int> ve1;
        int ans=0,size=0,i=0;
        for(auto i : b){
            if(map1[i[1]]==0){
                map1[i[1]]=i[0];
                ve1.push_back(i[1]);
            }else map1[i[1]]+=i[0];
                
           
        }
        sort(ve1.rbegin(),ve1.rend());
        //for(auto i : ve1) cout<<i<<endl;
        while(size<ts && i<ve1.size()){
            if(size+map1[ve1[i]] < ts){
                ans+=map1[ve1[i]]*ve1[i];
                size+=map1[ve1[i]];
                //cout<<"ans: "<<ans<<endl<<"size: "<<size<<endl;
            }else{
                if(size+map1[ve1[i]] == ts){
                    return ans+(map1[ve1[i]]*ve1[i]);
                }else{
                    return ans+(ts-size)*ve1[i];
                }
            }
            i++;
        }//end of while
        
        
        
        
        return ans;        
    }
};