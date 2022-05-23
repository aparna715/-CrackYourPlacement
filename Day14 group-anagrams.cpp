class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>>mp;
        int n= s.size();
        string temp;
        for(int i =0;i<n;++i){
            temp=s[i];
            sort(s[i].begin(),s[i].end());
            mp[s[i]].push_back(temp);
        }
        vector<vector<string>>res;
        for(auto itr=mp.begin();itr!=mp.end();++itr)
            res.push_back(itr->second);
        return res;
    }
};
