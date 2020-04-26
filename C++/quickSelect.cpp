
int partition(vector<int>&v, int l, int r) {
	int pivot = v[r];
	int pIndex = l;

	for (int i = l; i < r; i++) {
		if (v[i] <= pivot) {
			swap(v[i], v[pIndex]);
			pIndex++;
		}
	}
	swap(v[r], v[pIndex]);
	return pIndex;
}

int kthLargest(vector<int>&v, int k, int l, int r) {
	int pivot = partition(v, l, r);
	if (pivot == v.size() - k)
		return v[pivot];
	else if (pivot > k)
		return kthLargest(v, k, l, pivot - 1);
	else
		return kthLargest(v, k , pivot, v.size()-1);
}