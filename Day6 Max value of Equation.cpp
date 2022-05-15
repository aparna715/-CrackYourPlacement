class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& pt, int k) {
        priority_queue<pair<int,int>>q;
        q.push({pt[0][1]-pt[0][0],pt[0][0]});
        int n=pt.size();
        int ans=INT_MIN;
        for(int j=1;j<n;j++){
            int sum=pt[j][0]+pt[j][1];
            
            while(!q.empty() && pt[j][0]-q.top().second>k) q.pop();
            if(!q.empty()){
                ans=max(ans,q.top().first+sum);
            }
            q.push({pt[j][1]-pt[j][0],pt[j][0]});
        }
        return ans;
    }
};
