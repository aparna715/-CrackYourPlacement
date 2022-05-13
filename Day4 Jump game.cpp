class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int reachable=0; // it gives index that current index can reach
        for(int i=0;i<n;i++){
            if(reachable<i)
                return false;
            reachable=max(reachable,i+nums[i]);
        }
        return true;
    }
};
