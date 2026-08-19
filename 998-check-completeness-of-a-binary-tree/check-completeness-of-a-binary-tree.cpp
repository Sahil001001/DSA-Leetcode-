
class Solution {
public:

    int sizeOfTree(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
    }
    bool isCompleteTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int size = sizeOfTree(root);
        int count = 0;

        while(count<size){
        TreeNode* temp = q.front();
        count+=1;
        q.pop();

        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        } 
        
        }

        while(q.size()>0){
            TreeNode* temp = q.front();
            if(temp!=NULL)return false;
            q.pop();
        }
        return true;
 
        
    }
};