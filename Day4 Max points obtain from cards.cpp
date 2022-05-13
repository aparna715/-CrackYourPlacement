class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int sum=0;
        for(int i:c){
            sum+=i;
        }
        int ans=0,window=0;
        int n=c.size();
        if(n==k) return sum;
        for(int i=0;i<n-k-1;i++){
            window+=c[i];
        }
        for(int i=n-k-1;i<n;i++){
            window+=c[i];
            ans=max(ans,sum-window);
            window-= c[i-(n-k-1)];
        }
        return ans;
    }
};
