/*
Problem: 108. Convert Sorted Array to Binary Search Tree
Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/
Category: Arrays, Binary Search Tree, Divide and Conquer
Difficulty: Easy

Approach:
- Use divide and conquer.
- Pick the middle element of the array as root to ensure balance.
- Recursively build left subtree from left half.
- Recursively build right subtree from right half.

Time Complexity: O(n)
Space Complexity: O(log n)  // due to recursion stack
*/

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
    TreeNode* build(vector<int>& nums, int left, int right) {
        if (left > right) return NULL;

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = build(nums, left, mid - 1);
        root->right = build(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};
