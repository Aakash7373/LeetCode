//============================================================================
// Name        : Permutations.cpp
// Author      : Akash Pawar// Version     :
// Copyright   : 
// Description : Permutations in C++, Ansi-style
//============================================================================

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        res.push_back(nums);
        while(next_permutation(nums.begin(),nums.end())){
            res.push_back(nums);
        }
        return res;
    }
};
