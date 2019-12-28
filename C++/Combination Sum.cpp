	vector<vector<int>> list;
    void auxCombination(vector<int>& candidates, int target, int remain, vector<int>&aux) {
               
        if (remain == 0) {
            list.push_back(aux);
        }
        else {
            for (int i = 0; i < candidates.size(); i++) {
                aux.push_back(candidates[i]);
                auxCombination(candidates, target, target - candidates[i], aux);
                aux.pop_back();
            }
        }
    }