class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        
         int res =0;
        for(int i=0;i<p.size();i++){
            map<double,int>mp;
            for(int j=i+1;j<p.size();j++){
                if(p[i][0]==p[j][0]){
                    mp[INT_MAX]++;
                }
                else {
                   double slope =(double)(p[i][1]-p[j][1])/(double)(p[i][0]-p[j][0]);
                    mp[slope]++;
                    }
            }
            for(auto it :mp){
                res = max(res,it.second);
            }               
        }
        return res+1;
    }
};
