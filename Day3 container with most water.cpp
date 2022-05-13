class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;
        int water = INT_MIN;
        int i=0;
        int j = n-1;
        while(i<j){
            area = min(height[i],height[j]) * (j-i);
            water = max(water,area);
            if(height[i] < height[j]){
                i++;
            }
            else if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
                j--;
            }
        }
        return water;
    }
};
