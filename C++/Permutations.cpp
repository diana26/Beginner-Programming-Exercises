void permutations(vector<int>&nums, vector<int>&v, vector<vector<int>>&list, int start) {
        vector<int>::iterator it; 
        if (v.size() == nums.size()) {
            list.push_back(v);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            it = find (v.begin(), v.end(), nums[i]);
            if (it != v.end())
                continue;
            else {
                v.push_back(nums[i]);
                permutations(nums, v, list, i + 1);
                v.pop_back();
            }
        }
            
    }
    
vector<vector<int>> permute(vector<int>& nums) {
    vector<int>v;
	vector<vector<int>>list;
	permutations(nums, v, list, 0);
    return list;
 }