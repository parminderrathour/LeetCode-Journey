// Problem: 1. Two Sum
// Link: https://leetcode.com/problems/two-sum/
// Category: Arrays, Hash Map
// Difficulty: Easy
// Time: O(n), Space: O(n)


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};
