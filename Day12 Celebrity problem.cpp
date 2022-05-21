class Solution{
 
  private:
  bool knows(vector<vector<int>>&M, int a,int b, int n)
  {
    if (M[a][b] ==1){
      return true;
    }
    else{
      return false;
    }
    
    public:
    int celebrity(vector<vector<int>>&M, int n){
      stack<int>s;
      for(int i=0;i<n.i++){
        s.push(i);
      }
      
      while(s,size()>1){
        int a= s.top();
        s.pop();
        int b= s.top();
        s.pop();
        if(knows(a,b)){
          s.push(b);
        }
        else{
          s.push(a);
        }
      }
      
      int candidate = s.top();
      
      bool rowcheck = false;
      int zerocnt = 0;
      for(int i=0;i<n;i++){
        if(M[candidate][i] == 0){
          zerocnt++;
        }
        if(zerocnt == n){
          rowcheck = true;
        }
      }
      
      bool colcheck = false;
      int onecnt = 0;
      for(int i=0;i<n;i++){
        if(M[i][candidate] == 0){
          onecnt++;
        }
        if(onecnt == n){
          colcheck = true;
        }
      }
      
      if(rowcheck == true && colcheck == true)
        return candidate;
      else
        return -1;
    }
  };
        
        
