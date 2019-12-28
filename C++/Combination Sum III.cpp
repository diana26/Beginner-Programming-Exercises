void auxCombinations(vector<vector<int>>&ans, vector<int>list, int k, int start, int n) {
        if (list.size() == k && n == 0) {
            ans.push_back(list);
            return;
        }
        for (int i = start; i <= 9; i++) {
            list.push_back(i);
            auxCombinations(ans, list, k, i+ 1, n - i);
            list.pop_back();
        }
            
}