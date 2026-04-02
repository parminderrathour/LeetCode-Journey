/*
Problem: 35. Search Insert Position
Link: https://leetcode.com/problems/search-insert-position/
Category: Arrays, Binary Search
Difficulty: Easy

Approach: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  

        if (nums[mid] == target) {
…    return left; 
}
    
};
