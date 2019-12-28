	void combinations(vector<vector<int>>&list, vector<int>v, int n, int start, int k) {
	    if (v.size() == k)
		    list.push_back(v);
	    for (int i = start; i <= n; i++) {
		    v.push_back(i);
		    combinations(list, v, n, i + 1, k);
		    v.pop_back();
	    }
    }
    
    