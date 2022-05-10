class Solution {
public:
    int maxProfit(vector<int>& p) {
       int n=p.size();
        vector<int>left(n,0),right(n,0);
        for(int i=0;i<n;i++){
            if(i==0)left[i]=p[i];
            else left[i]=min(p[i],left[i-1]);
        }
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                right[i]=p[n-1];
            }
            else{
                right[i]=max(p[i],right[i+1]);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,right[i]-left[i]);
        }
        return ans;
    }
};
