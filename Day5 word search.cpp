class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
    for (unsigned int i = 0; i < board.size(); i++) 
        for (unsigned int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word))
                return true;
    return false;
}

bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
    if (word.size()==0)
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0] ) 
        //board[i][j] != word[0] means if first letter is not matching which means word is not present 
        return false;
    char c = board[i][j];   // storing because we have to restore it again
    board[i][j] = '*';     // we are making * as we shouldn't use it again
    string s = word.substr(1); // substr(index,length) return substring starting from index to required length
    bool ret =  dfs(board, i-1, j, s) ||
                dfs(board, i+1, j, s) ||
                dfs(board, i, j-1, s) ||
                dfs(board, i, j+1, s);
    board[i][j] = c; //restoring as we can have a case only few letter match after that no
    return ret;

    }
};
