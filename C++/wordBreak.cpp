bool wordBreak(string s, vector<string>& wordDict) {
	bool arr[100001] = { 0 };
	arr[0] = true;

 	for (int i = 1; i <= s.length(); i++) {
		for (int j = 0; j < i; j++) {
			string aux = s.substr(j, i);
			if (arr[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i)) != wordDict.end()) {
				arr[i] = true;
				break;
			}
		}
	}
	return arr[s.length()];
}