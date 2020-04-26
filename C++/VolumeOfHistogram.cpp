int volumeOfHistogram(vector<int>v) {
	vi left_max, right_max;
	int leftMax = v[0];
	for (int i = 0; i < v.size(); i++) {
		leftMax = max(leftMax, v[i]);
		left_max.push_back(leftMax);
	}

	int sum = 0, curr;
	int rightMax = v[v.size() - 1];
	for (int i = v.size() - 1; i >= 0; i--) {
		rightMax = max(rightMax, v[i]);
		right_max.push_back(rightMax);
		curr = min(left_max[i], rightMax);
		if (curr > v[i]) {
			sum += curr - v[i];
		}
	}
	return sum;
}