class Solution{
  public:
  int findMD((int arr[],int n,int m){
      if(m==0||n==0) return -1;
      int min_diff=INT_MAX;
      for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        min_diff=min(diff,min_diff);
      }
    return min_diff;
  }
             };
