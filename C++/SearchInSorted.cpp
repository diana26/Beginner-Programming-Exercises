int searchAux(vector<int>& nums, int target, int l, int r) {
	if (l > r) return -1;
	int mid = (l + r) / 2;
	if (nums[mid] == target) return mid;
	if(nums[l] <= nums[mid]) {
		if (target >= nums[l] && target <= nums[mid]) {
			return searchAux(nums, target, l, mid - 1);
		}
		return searchAux(nums, target, mid + 1, r);
	}

	if (target <= nums[r] && target >= nums[mid])
		return searchAux(nums, target, mid + 1, r);

	return searchAux(nums, target, l, mid - 1);

}

int search(vector<int>& nums, int target) {
	int l = 0, r = nums.size() - 1;
	return searchAux(nums, target, l, r);
}