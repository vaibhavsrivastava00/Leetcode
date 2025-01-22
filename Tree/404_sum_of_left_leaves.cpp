/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void summ(TreeNode* root,int& sum,bool flag){
        if(root==NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL && flag == true){
            sum += root->val;
        }
        summ(root->left,sum,true);
        summ(root->right,sum,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool flag;
        int sum =0;
        summ(root,sum,flag);
        return sum;
    }
};