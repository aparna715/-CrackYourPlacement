class Solution {
public:
    
    vector <string> res;
    
    void backtrack(int o, int c, int n, string curr){
        if(curr.length()==n*2){
            res.push_back(curr);
            return;
        }
        if(o<n)
            backtrack(o+1,c,n,curr+"(");
        if(c<o)
            backtrack(o,c+1,n,curr+")");
    }
    
    vector<string> generateParenthesis(int n) {
        backtrack(0,0,n,"");
        return res;
    }
};
