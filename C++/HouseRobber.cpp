int rob(vector<int>& nums) {
	int dp[100001];
	if (nums.size() == 0)
		return 0;
	if (nums.size() == 1)
		return nums[0];
	if (nums.size() == 2)
		return max(nums[0], nums[1]);
	dp[0] = nums[0];
	dp[1] = max(nums[0], nums[1]);
	if (nums.size() > 3)
		dp[2] = max(dp[0] + nums[2], dp[1]);
	else
		dp[2] = max(dp[0], dp[1]);
	for (int i = 3; i < nums.size(); i++) {
		if (i == nums.size() - 1 && nums.size() % 2 != 0)
			dp[i] = max(nums[i] + dp[i - 3], dp[i-1]);
		else
			dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);

	}
	return dp[nums.size() - 1];
}