class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        if(n==0) return "";
        
        string ans  = "";
        sort(begin(s), end(s));
        string a = s[0];
        string b = s[n-1];
        
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        
        return ans;
           
    }
};
