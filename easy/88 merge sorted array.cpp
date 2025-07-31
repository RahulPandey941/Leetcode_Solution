// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size = m+n-1 ;
        int p1 = m-1 ;
        int p2 = n-1 ;
        for(int i = size ; i>=0 ; i--){
            if(p1 < 0){
                nums1[i] = nums2[p2] ;
                p2-- ;
            }
            else if(p2 < 0){
                nums1[i] = nums1[p1] ;
                p1-- ;
            }
            else {
                nums1[i] = max(nums1[p1] , nums2[p2]) ;
                nums1[p1] > nums2[p2] ? p1-- : p2-- ;
            }
            
        }
        
    }
};
int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3; // Number of elements in nums1
    int n = 3; // Number of elements in nums2

    sol.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}