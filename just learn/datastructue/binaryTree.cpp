#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int,vector<int>> tree;
struct TreeNode
{   
    int val;
    TreeNode* right;
    TreeNode* left;
    TreeNode(int _val): val(_val),right(nullptr),left(nullptr) {}
};


int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left =new TreeNode(4);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    //hashtable to simulate binarytree
    tree[1]={2,5};
    tree[2]={4};
    tree[3]={6,7};
}