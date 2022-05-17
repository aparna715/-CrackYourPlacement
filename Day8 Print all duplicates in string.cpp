#include <bits/stdc++.h>
using namespace std;
void Dups(string str)
{
    unordered_map<char, int> cnt;
    for (int i = 0; i < str.length(); i++) {
        cnt[str[i]]++;  
    }
  
    for (auto i : cnt) {   
        if (i.second > 1)   
            cout << i.first << ", count = " << i.second << "\n";
    }
}
int main()
{
    string str = "appu";
    Dups(str);
    return 0;
}
