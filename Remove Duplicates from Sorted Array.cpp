#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0; // No elements to process
        }

        std::vector<int> ans;
        ans.push_back(nums[0]); // Add the first element to the answer

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                ans.push_back(nums[i]);
            }
        }

        // Copy the unique elements back to the original vector (if needed)
        for (int i = 0; i < ans.size(); i++) {
            nums[i] = ans[i];
        }

        return ans.size();
    }
};
