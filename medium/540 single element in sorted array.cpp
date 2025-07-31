// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int fst = 0 ;
        int size = nums.size();
        int lst = size - 1 ;
        if(size == 1){
            return nums[0] ;
        }
        while (fst <= lst){
            int mid = fst + (lst -fst)/2;
            if(mid==0 && nums[0] != nums[1]) return nums[mid];
            if(mid== lst && nums[lst] != nums[lst-1]) return nums[mid];


            if(nums[mid] != nums[mid +1] && nums[mid] != nums[mid -1]){
                return nums[mid];
            }
            if(mid %2 == 0){
                if(nums[mid]== nums[mid-1]) lst = mid-1 ;
                else fst = mid+1 ;
            }else{
                if(nums[mid]== nums[mid+1]) lst = mid-1 ;
                else fst = mid+1 ;
            }

        }
        return -1;
    }
};
int main() {
    Solution sol;

    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    cout << "The single element is: " << sol.singleNonDuplicate(nums) << endl;
    return 0;
}