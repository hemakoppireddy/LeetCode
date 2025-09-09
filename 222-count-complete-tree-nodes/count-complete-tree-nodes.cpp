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
    int right(TreeNode* root) {
        int i=0;
        TreeNode* temp=root;
        while(temp!=nullptr) {
            temp=temp->right;
            i++;
        }
        return i;
    } 
    int left(TreeNode* root) {
        int i=0;
        TreeNode* temp=root;
        while(temp!=nullptr) {
            temp = temp->left;
            i++;
        }
        return i;
    }
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int r = right(root);
        int l = left(root);
        if(l==r) return pow(2, l)-1;
        return countNodes(root->left)+countNodes(root->right)+1;
    }
};