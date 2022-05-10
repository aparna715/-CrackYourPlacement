class Solution {
public:
    int findDuplicate(vector<int>& nums) {
             // using sort
        
        // int i,dup;
        // sort(nums.begin(),nums.end());
        // for(i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         dup=nums[i];
        //         break;
        //     }
        // }
        // return dup;
        
        
        
        // using vector
        
        
        vector<int>cnt(nums.size()+1,0);
        int dup=0;
        for(int i=0;i<nums.size();i++){
            cnt[nums[i]]++;
        }
        for(int i=0;i<cnt.size();i++){
            if(cnt[i]>1){
               dup=i;
                break;
            }
        }
        return dup;
    }
};
