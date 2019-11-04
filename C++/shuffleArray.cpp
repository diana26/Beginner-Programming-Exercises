vector<int>shuffleArray(vector<int>&v) {
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++) {
		int x = rand() % (i + 1);
		if (x != i)
			swap(v[i], v[x]);
	}
	return v;
}