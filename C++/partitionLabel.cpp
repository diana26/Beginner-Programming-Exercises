vector<int> partitionLabels(string S) {
	vector<int>arr(26);
	vector<int>ans;
	for (int i = 0; i < S.length(); i++) {
		arr[S[i] - 'a'] = i;
	}
	int p = 0, q = 0, r = 0;
	while (q < S.length() && p < S.length()) {
		q = max(q, arr[S[p] - 'a']);
		if (p == q && p != 0) {			
			ans.push_back(p - r + 1);			
			r = p + 1;
			
		}
		
		p++;
	}
	return ans;
}
