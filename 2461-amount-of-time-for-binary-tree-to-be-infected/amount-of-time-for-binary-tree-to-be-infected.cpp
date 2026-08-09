class Solution {
public:

    void mapParent(TreeNode* root, unordered_map<TreeNode*,TreeNode*>&parent){  //mapping of elements with their root

       if(root == NULL) return;
       if(root->left){
        parent[root->left]=root;
       }
       if(root->right){
        parent[root->right]=root;
       }
       mapParent(root->left,parent);
       mapParent(root->right,parent);

    } 

    void search(TreeNode* root,int start,TreeNode*& first){      //start int dia h isle us node ka adress chahiye taki wha s BFS start kre
        if(root==NULL) return;
        if(root->val==start){
            first=root;
        }
        search(root->left,start,first);
        search(root->right,start,first);
    }


    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parent;
        TreeNode* first = NULL; 
        int level = 0;

        search(root,start,first);
        mapParent(root,parent);


        queue<pair<TreeNode*,int>>q;
        q.push({first,level});

        unordered_set<TreeNode*>s;
        s.insert(first);

        int maxlevel = 0;
        

        while(q.size()>0){
            pair<TreeNode*,int>p=q.front();
            q.pop();
            level = p.second;
            TreeNode* temp = p.first;

            maxlevel=max(level,maxlevel);
            if(temp->left){
                if(s.find(temp->left)==s.end()){
                    q.push({temp->left,level+1});
                    s.insert(temp->left);
                }
            
            }
            if(temp->right){
                if(s.find(temp->right)==s.end()){
                    q.push({temp->right,level+1});
                    s.insert(temp->right);
                }
            }
            if(parent.find(temp)!=parent.end()){
                if( s.find(parent[temp])==s.end()){

                q.push({parent[temp],level+1});
                s.insert(parent[temp]);
            }
               
            }

        }
        return maxlevel;

       
       
    }
};