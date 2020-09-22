/*
 * 2020-09-22
 */

#include <iostream>
#include "BinaryTree.h"
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mirrorTree(TreeNode* root) {
        if (root == NULL || (root->left == NULL && root->right == NULL))
            return root;

        TreeNode* temp;
        temp = root->left;
        root->left = root->right;
        root->right = temp;

        if (root->left != NULL)
            mirrorTree(root->left);
        if (root->right != NULL)
            mirrorTree(root->right);

        return root;
    }
};

int main()
{
    return 0;
}