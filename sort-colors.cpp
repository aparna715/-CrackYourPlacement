class Solution {
public:
    void sortColors(vector<int>& nums) {
//         int cnt1=0,cnt2=0,cnt3=0;
        
//         // counting colors
        
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==0)cnt1++;
//             else if(nums[i]==1) cnt2++;
//             else cnt3++;
//         }
        
//         int i=0;
//         while(cnt1--){
//             nums[i++]=0;
//         }
//         while(cnt2--){
//             nums[i++]=1;
//         }
//         while(cnt3--){
//             nums[i++]=2;
//         }
        
        //DUTCH  NATIONAL  FLAG  ALGORITHM
        
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
        if(nums[j]==0){
            swap(nums[i],nums[j]);
            i++;
            j++;
        }
        else if(nums[j]==1){
            j++;
        }
        else{
            swap(nums[j],nums[k]);
            k--;
        }
    }
    }
};
