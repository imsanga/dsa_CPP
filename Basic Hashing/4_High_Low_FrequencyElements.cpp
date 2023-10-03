// Highest / Lowest Frequency Elements - CodingNinjas

// vector<int> getFrequencies(vector<int>& v) {
//     map<int, int> mpp;
//     vector<int> ans;

//     for(int i = 0; i < v.size(); i++) mpp[v[i]]++;

//     int temp1 = INT_MIN, temp2 = INT_MAX, temp1ans, temp2ans;

//     for(auto it : mpp) {
//         if(it.second > temp1) {
//             temp1 = it.second;
//             temp1ans = it.first;
//         }
//         if(it.second < temp2) {
//             temp2 = it.second;
//             temp2ans = it.first;
//         }
//     }

//     ans.push_back(temp1ans);
//     ans.push_back(temp2ans);

//     return ans;
// }