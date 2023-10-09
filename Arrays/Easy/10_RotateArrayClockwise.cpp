// Rotate Array - Leetcode (ClockWise-Right)

// BruteForce

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         for(int i = 0; i < k; i++) {
//             int temp = nums[nums.size() - 1];
//             for(int j = nums.size() - 2; j >= 0; j--) {
//                 nums[j+1] = nums[j];    
//             }
//             nums[0] = temp;
//         }
//     }
// };


// Optimal Solution

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         if(k > nums.size()) k %= nums.size();
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     }
// };