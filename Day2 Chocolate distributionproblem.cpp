 #include<bits/stdc++.h>
 using namespace std;
 int findMD((int arr[],int n,int m){
      if(m==0||n==0) return -1;
      int min_diff=INT_MAX;
      for(int i=0;i+m-1<n;i++){
        int diff=arr[i+m-1]-arr[i];
        min_diff=min(diff,min_diff);
      }
    return min_diff;
  }
  int main(){
  int arr=[12,4,7,8,5,,3,50];
  int m=3;
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"Minimum difference is:"<<findMD(arr,n,m);
  return 0;
  }
