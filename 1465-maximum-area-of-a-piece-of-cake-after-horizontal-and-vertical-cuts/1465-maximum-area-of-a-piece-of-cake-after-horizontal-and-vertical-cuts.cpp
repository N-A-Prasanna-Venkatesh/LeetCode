class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        int ans=-1;
        int s1=0,s2=0;
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        hc.insert(hc.begin(),0);   
        vc.insert(vc.begin(),0);
        hc.push_back(h);
        vc.push_back(w);

        for(int i=1;i<hc.size();i++){
            s1=max(s1,hc[i]-hc[i-1]);
        }
        for(int i=1;i<vc.size();i++){
            s2=max(s2,vc[i]-vc[i-1]);
        }
        
        
        
        
        
        return (long)s1*s2%1000000007;
    }
};