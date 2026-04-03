/*
Problem: 66. Plus One
Link: https://leetcode.com/problems/plus-one/
Category: Arrays
Difficulty: Easy

Approach: Simulation (Carry Handling)
- Traverse digits from right to left
- If digit < 9 → increment and return
- If digit == 9 → set to 0 and continue (carry)
- If all digits are 9 → add 1 at the beginning

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
          int n = digits.size();
    
    for (int i = n - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    
    digits.insert(digits.begin(), 1);
    return digits;
    }
};
