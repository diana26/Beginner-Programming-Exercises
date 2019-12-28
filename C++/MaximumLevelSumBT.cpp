int maxLevelSum(TreeNode* root) { 
        if (root == NULL)
            return 0;
        map<int,int>m;
        int sum = 0, maxi = INT_MIN, i = 1, ans = 0;
        queue<TreeNode*>q;
        q.push(root);
        
        while (!q.empty()) {
            int x = q.size();
            TreeNode *n = q.front();            
            
            for (int i = 0; i < x; i++) {
                TreeNode *node= q.front();
                q.pop();
                sum += node->val;                            
                
                if (node->left != NULL)
                q.push(node->left);
                if (node->right != NULL)
                q.push(node->right);
            }
            if (sum > maxi) {
                ans = i;
                maxi = sum;
            }            
            sum = 0;
            i++;
            
        }
        return ans;
       
    }