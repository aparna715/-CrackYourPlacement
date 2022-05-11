class Solution {
public:
    // TLE coming
    int subarraysDivByK(vector<int>& nums, int k) {
    //     int cnt=0;
    //     for(int i=0;i<nums.size();i++){
    //         int sum=0;
    //         for(int j=i;j<nums.size();j++){
    //             sum=sum+nums[j];
    //             if(sum%k==0)
    //                 cnt++;
    //         }
    //     }
    //     return cnt;
    // }
    
    //using map
    
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
        nums[i]=(nums[i]+10000*k)%k;
    }
    for(int i=1;i<n;i++){
        nums[i]+=nums[i-1];
        nums[i]%=k;
    }
    map<int,int>mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        mp[nums[i]]++;
        if(nums[i]!=0)cnt=cnt+(mp[nums[i]]-1);
        else cnt=cnt+mp[nums[i]];
    }
    return cnt;
}
};
