// Implementation Using Recursion
//Q-1 Inorder Traversal
class Solution {
    vector<int> res;
    void traverse(TreeNode* root){    
        if(root == NULL){
            return;
        }
          inorderTraversal(root->left);
          res.push_back(root->val);
          inorderTraversal(root->right);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        
        return res;
    }
};

// Q-2 PostOrder traversal
class Solution {
public:
    vector<int> arr;
    void traversal(TreeNode* root){
        if(root == NULL){
            return;
        }
        traversal(root->left);
        traversal(root->right);
        arr.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        traversal(root);
        
        return arr;
    }
};

// Q-3 Preorder Traversal
class Solution {
public:
    vector<int>arr;
    void traversal(TreeNode* root){
        if(root == NULL){
            return;
        }
        arr.push_back(root->val);
        traversal(root->left);
        traversal(root->right);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
        traversal(root);
        
        return arr;
    }
};

// Q-4 hieght of binary Tree
int height(Node* root) {
        // Write your code here.
        int h=0;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            if(node != NULL){ 
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            else if(!q.empty()){
                q.push(NULL);
                h++;
            }
        }
        return h;
    }

//Q-5 level Order Traversal 
 void levelOrder(Node * root) {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node *node = q.front();
            q.pop();
            cout<<node->data<<" ";
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        }
    }

    // Implementation Using Stack
    //InOrder Traversal
    void inOrder(struct Node* root){
    stack<Node*> st;
    vector<int> ans;
    st.push(root);
    Node *node = root;
    while(!st.empty()){
        if(node != NULL){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty()){
                break;
            }
            node = st.top();
            st.pop();
            ans.push_back(node->data);
            node = node->right;
        }
    }
    for(int i=0; i<ans.size()-1; i++){
        cout<<ans[i]<<" ";
    }
}

//PreOder Traversal
void preOrder(struct Node* root){
   stack<Node*> st;
    vector<int> ans;
    st.push(root);
    // Node *node = root;
    while(!st.empty()){
        root = st.top();
        st.pop();
        ans.push_back(root->data);
        if(root->right){
            st.push(root->right);
        }
        if(root->left){
            st.push(root->left);
        }
    }
    for(int i=0; i<ans.size()-1; i++){
        cout<<ans[i]<<" ";
    }
}

//PostOder Traversal

