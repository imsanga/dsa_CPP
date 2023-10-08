// Max Consecutive Ones - Leetcode

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
//         int ct = 0, maxy = 0;
//         for(int i = 0; i < nums.size(); i++) {
//             if(nums[i] == 1) ct++;
//             else ct = 0;
//             maxy = max(maxy, ct);
//         }
//         return maxy;
//     }
// };