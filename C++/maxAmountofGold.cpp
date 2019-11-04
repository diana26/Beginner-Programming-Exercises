void dfs(vector<vector<int>>& grid, int i, int j, int gold, int max_gold) {
	int amount = grid[i][j];
	gold += amount;
	grid[i][j] = 0;
	max_gold = max(max_gold, gold);

	if (i > 0 && grid[i - 1][j] > 0)
		dfs(grid, i - 1, j, gold, max_gold);

	if (j > 0 && grid[i][j - 1] > 0)
		dfs(grid, i, j - 1, gold, max_gold);

	if (i < grid.size() - 1 && grid[i + 1][j] > 0)
		dfs(grid, i + 1, j, gold, max_gold);

	if (j < grid[0].size() - 1 && grid[i][j + 1] > 0)
		dfs(grid, i, j + 1, gold, max_gold);

	gold -= amount;
	grid[i][j] = amount;
}

int getMaximumGold(vector<vector<int>>& grid) {
	int max_gold = 0, ans = 0, gold = 0;

	for (int i = 0; i < grid.size(); i++) {
		for (int j = 0; j < grid[i].size(); j++) {
			if (grid[i][j] > 0) {
				dfs(grid, i, j, gold, max_gold);
				ans = max(ans, max_gold);
			}
		}
	}
	return ans;
}
