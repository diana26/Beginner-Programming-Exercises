void dfs(vector<vector<char>>& v, int i, int j) {
        if (i < 0 || j < 0 || i >= v.size() || j >= v[0].size() || v[i][j] != '1')
            return;
        v[i][j] = '0';
        dfs(v, i+1, j);
        dfs(v, i -1, j);
        dfs(v, i, j+1);
        dfs(v, i, j-1);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        if (grid.size() == 0)
            return 0;
        
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }