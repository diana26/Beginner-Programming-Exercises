int longestValidParentheses(string s) {
	stack<int>st;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(')
			st.push(i);
		else {
			if (!st.empty()) {
				if (s[st.top()] == '(') {
					st.pop();
				}
				else {
					st.push(i);
				}
			}
			else
				st.push(i);
		}		
	}

	if (st.empty())
		return s.length();

	int ans = 0, curr = s.length();

	while (!st.empty()) {
		ans = max(ans, (curr - st.top() - 1));
		curr = st.top();
		st.pop();
	}
	return max(ans, curr);
}
