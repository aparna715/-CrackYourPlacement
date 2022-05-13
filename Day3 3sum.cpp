class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>>res;
        if(n<3)return res;
        if(nums[0]>0) return res;
        for(int i=0;i<n;i++){
            if(i>0&&(nums[i]==nums[i-1]))
                continue;
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(s>0)r--;
                else if(s<0)l++;
                else{
                    res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                    while(l<r&&nums[l]==nums[l+1]) l++;
                    while(l<r&&nums[r]==nums[r-1]) r--;
                    l++;
                    r--;
                }
            }
        }
        return res;
    }
};
