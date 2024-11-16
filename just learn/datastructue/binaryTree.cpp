#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

unordered_map<int, vector<int>> tree;
struct TreeNode
{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(int _val) : val(_val), right(nullptr), left(nullptr) {}
};

void inorderTraverse(TreeNode *root)//
{
    int curdepth=0;int mindepth=__INT_MAX__;int maxdepth=__FLT32_MIN__;
    if (root == nullptr)
        return;

    curdepth++;
    if(root->left==nullptr && root->right==nullptr) curdepth=max(curdepth,maxdepth);
    
    inorderTraverse(root->left);
    cout << root->val << " ";
    inorderTraverse(root->right);
}

void preorderTraverse(TreeNode *root)//root left right
{
    if (root == nullptr)
        return;

    cout << root->val << " ";
    preorderTraverse(root->left);

    preorderTraverse(root->right);
}

void postorderTraverse(TreeNode *root)//left right root
{
    if (root == nullptr)
        return;

    postorderTraverse(root->left);

    postorderTraverse(root->right);
    cout << root->val << " ";
}

void levelTraverse(TreeNode* root)
{
    if(root==nullptr) return;
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty())
    {
        TreeNode* cur=q.front();
        cout << cur->val;
        q.pop();

        if(cur->left!=nullptr) q.push(cur->left);
        if(cur->right!=nullptr) q.push(cur->right);
    }
}

void leverOrderTraverse)TreeNode* root)
{
    queue<TreeNode*> q;
    q.push(root);
    int depth = 1;

    
    while(!q.empty())
    {
        int size=q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* cur = q.front();
            cout << "depth:" << depth << "which" << i << "value:" << cur->val;
            q.pop;
            i++

            if(cur->left==nullptr&&cur->right==nullptr) return depth;

            if(cur->left!=nullptr) q.push(q->left);
            if(cur->right!=nullptr) q.push(q->right);
        }
        
    depth++;
    }
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // hashtable to simulate binarytree
    tree[1] = {2, 5};
    tree[2] = {4};
    tree[3] = {6, 7};
}