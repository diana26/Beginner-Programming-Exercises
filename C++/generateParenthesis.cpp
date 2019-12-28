
void auxiliar(vector<string>&ans,string s, int open, int close, int maxi) {
        
        if (s.length() == maxi * 2) {
            ans.push_back(s);
        }
        if (open < maxi) {
            auxiliar(ans, s + '(', open + 1, close, maxi);
        }
        if (close < open) {
            auxiliar(ans, s + ')', open, close + 1, maxi);    
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        auxiliar(ans, "", 0, 0, n);
        return ans;
    }