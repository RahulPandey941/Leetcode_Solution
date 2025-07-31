// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

// Return the index of the peak element.

// Your task is to solve it in O(log(n)) time complexity.

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
   int fst = 0, lst = arr.size() - 1;

        while (fst < lst) {
            int mid = fst + (lst - fst) / 2;

            if (arr[mid] < arr[mid + 1]) {
                fst = mid + 1;
            } else {
                lst = mid;
            }
        }
        return fst;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {0, 2, 3,1, 0};
    cout << "The peak index is: " << sol.peakIndexInMountainArray(arr) << endl;
    return 0;
}