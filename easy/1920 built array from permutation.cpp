// Given a zero-based permutation nums (0-indexed), build an array ans of the same length where ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it.

// A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans (nums.size(),0);
        for(int i=0 ; i<nums.size() ; i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

// Example usage:
int main() {
    Solution solution;
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    vector<int> result = solution.buildArray(nums);
    
    cout << "Built array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}   