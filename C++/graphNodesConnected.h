


bool graphNodesConnected(int x, int y) {
	if (x == y) return true;
	bool visited[];
	queue<int>q;
	
	q.push(x);
	while (!q.empty()) {
		int s = q.front();
		q.pop();
		
		list<int> iterator::i;
		for (int i = adj[s].begin(); i < adj[s].end(); i++) {
			if (*i == y) return true;
			if (visited[*i] == false) {
				visited[*i] = true;
				q.push(*i);
			}
		}
	}
	return false;
}

int main() {
	list<int> *adj;
	// call the function after declaring the adjacent list
	return 0;
}