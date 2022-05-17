class Solution {
public:
    int merge(vector<int> &nums, int l, int m, int h) {
        int cnt=0;
        int j=m+1;
        for(int i=l;i<=m;++i) {
            while(j<=h && nums[i] > 2LL*nums[j]) ++j;
            cnt += (j - (m+1));
        }
        vector<int> temp;
        int left=l,right=m+1;
        while(left<=m && right<=h) {
            if(nums[left]<=nums[right]) temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
        }
        while(left<=m) temp.push_back(nums[left++]);
        while(right<=h) temp.push_back(nums[right++]);
        for(int i=l;i<=h;++i) {
            nums[i]=temp[i-l];
        }
        return cnt;
    }
    int mergeSort(vector<int> &nums, int l, int h) {
        if(l>=h) return 0;  
        int m=(l+h)/2;
        int cnt=0;
        cnt += mergeSort(nums,l,m);   
        cnt += mergeSort(nums,m+1,h);  
        cnt += merge(nums,l,m,h);      
        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};
