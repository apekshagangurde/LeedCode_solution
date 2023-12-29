#include <vector>

class Solution {
public:
    bool increasingTriplet(std::vector<int>& nums) {
        int first = INT_MAX;
        int second = INT_MAX;

        for (int num : nums) {
            if (num <= first) {
                first = num;  // Update the smallest element
            } else if (num <= second) {
                second = num;  // Update the second smallest element
            } else {
                return true;  // Found a triplet
            }
        }

        return false;  // No triplet found
    }
};
