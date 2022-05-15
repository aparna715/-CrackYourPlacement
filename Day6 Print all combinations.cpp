void fun(vector<int>&ar,int i,int r,vector<int>&res){
    int n = ar.size();
    if(res.size()==r){
        for(int i=0;i<r;i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
        return;
    }
    if(i==n)return;
    res.push_back(ar[i]);
    fun(ar,i+1,r,res);
    res.pop_back();
    fun(ar,i+1,r,res);
}
void solve(){
    int n,r;

    cin>>n>>r;
    vector<int>ar(n);
    for(int i=0;i<n;i++)cin>>ar[i];
    vector<int>res;
    fun(ar,0,r,res);    
}
