class Solution {
public:
    int getLiveNeighbours(vector<vector<int>>& curr, int i, int j, int m, int n) {
	int live = 0;
	if(i>0) {
		// upper neighbour
		if(curr[i-1][j] == 1 || curr[i-1][j] == 3) live++;
	}
	if(i<m-1) {
		//lower neighbour
		if(curr[i+1][j] == 1 || curr[i+1][j] == 3) live++;
	}
	if(j>0) {
		//left neighbour
		if(curr[i][j-1] == 1 || curr[i][j-1] == 3) live++;
	}
	if(j<n-1) {
		//right neighbour
		if(curr[i][j+1] == 1 || curr[i][j+1] == 3) live++;
	}

	if(i>0 && j>0) {
		if(curr[i-1][j-1] == 1 || curr[i-1][j-1] == 3) live++;
	}
	if(i>0 && j<n-1) {
		if(curr[i-1][j+1] == 1 || curr[i-1][j+1] == 3) live++;
	}
	if(i<m-1 && j>0) {
		if(curr[i+1][j-1] == 1 || curr[i+1][j-1] == 3) live++;
	}
	if(i<m-1 && j<n-1) {
		if(curr[i+1][j+1] == 1 || curr[i+1][j+1] == 3) live++;
	}
	return live;
}
void gameOfLife(vector<vector<int>>& b) {
	int m = b.size();
	int n = b[0].size();
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			int ln = getLiveNeighbours(b, i, j, m, n);
			if(b[i][j] == 0) {
				if(ln == 3) {
					b[i][j] = 2; 
				}
			}
			else if(b[i][j] == 1) {
				if(ln < 2 || ln > 3) {
					b[i][j] = 3; 
				}
			}
		}
	}
	for(int i = 0; i<m; i++) {
		for(int j = 0; j<n; j++) {
			if(b[i][j] == 2) b[i][j] = 1;
			else if(b[i][j] == 3) b[i][j] = 0;
		}
	}
}
};
