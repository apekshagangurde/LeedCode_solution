#include <vector>

class Solution {
public:
    vector<int> productExceptSelf(std::vector<int>& nums) {
        int n = nums.size();
       vector<int> res(n, 1); // Initialize the result vector with all elements set to 1

        int productOfAllBeforeCurrent = 1;

        // Calculate product of all elements before the current element
        for (int i = 0; i < n; i++) {
            res[i] *= productOfAllBeforeCurrent;
            productOfAllBeforeCurrent *= nums[i];
        }

        int productOfAllAfterCurrent = 1;

        // Calculate product of all elements after the current element
        for (int i = n - 1; i >= 0; i--) {
            res[i] *= productOfAllAfterCurrent;
            productOfAllAfterCurrent *= nums[i];
        }

        return res;
    }
};
