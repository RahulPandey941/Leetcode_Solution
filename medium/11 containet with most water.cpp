// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int current_area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, current_area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_area;
    }
};
// Example usage:
int main() {
    Solution solution;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int max_area = solution.maxArea(height);
    cout << "Max area: " << max_area << endl;
    return 0;
}