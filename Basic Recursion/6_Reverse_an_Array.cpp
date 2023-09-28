// Non Recursive 

// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     vector<int> ans;
//     for(int i = n-1; i >= 0; i--) ans.push_back(nums[i]);
//     return ans;
// }


// Non Recursive 2.0

// int temp = 0;
// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     while(temp < n/2) {
//         swap(nums[temp], nums[n-temp-1]);
//         temp++;
//     }
//     return nums;

// }


// Recursive 

// int temp = 0;
// vector<int> reverseArray(int n, vector<int> &nums)
// {
//     if(temp < n/2) {
//         swap(nums[temp], nums[n-temp-1]);
//         temp++;
//         reverseArray(n, nums);
//     }
//     return nums;

// }


