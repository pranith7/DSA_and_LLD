/*

2441. Largest Positive Integer That Exists With Its Negative
Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.

 

Example 1:

Input: nums = [-1,2,-3,3]
Output: 3
Explanation: 3 is the only valid k we can find in the array.
Example 2:

Input: nums = [-1,10,6,7,-7,1]
Output: 7
Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.
Example 3:

Input: nums = [-10,8,6,7,-2,-3]
Output: -1
Explanation: There is no a single valid k, we return -1.

Constraints:

1 <= nums.length <= 1000
-1000 <= nums[i] <= 1000
nums[i] != 0

*/

#include <vector>
#include <algorithm>

using namespace std;

int largestK(vector<int>& nums) {
    // sort(nums.begin(), nums.end());
    
    // int left = 0;
    // int right = nums.size() - 1;
    // int maxK = -1;
    
    // while (left < right) {
    //     if (nums[left] + nums[right] == 0) {
    //         maxK = max(maxK, abs(nums[left]));
    //         left++;
    //         right--;
    //     } else if (nums[left] + nums[right] < 0) {
    //         left++;
    //     } else {
    //         right--;
    //     }
    // }
    
    // return maxK;

    unordered_set<int> numSet(nums.begin(), nums.end());
    
    int maxK = -1;
    for (int num : nums) {
        if (num > 0 && numSet.count(-num)) {
            maxK = max(maxK, num);
        }
    }
    
    return maxK;
}

int main() {
    vector<int> nums = {1, 2, -2, 4, -4};
    int result = largestK(nums);
    cout << "Largest positive integer k such that -k also exists: " << result << endl;
    
    return 0;
}
