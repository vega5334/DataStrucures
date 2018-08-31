class Solution {
public:
    TreeNode* prev=NULL;
    bool isValidBST(TreeNode* root) {
          stack <TreeNode*> st;
        TreeNode* curr=root;
        TreeNode* prev=NULL;
        while( curr!=NULL ||!st.empty())
        {
            while(curr!=NULL)
            {
                  st.push(curr);
                  curr=curr->left;
            }
            curr=st.top();
            st.pop();
            if(prev!=NULL && curr->val<=prev->val) return false;
            prev=curr;
            curr=curr->right;
        }
        return true;
    }
};
