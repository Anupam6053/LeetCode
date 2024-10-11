#include <vector>
#include <unordered_set>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        int n = nums.size();
        std::unordered_set<int> numSet;

        
        for (int num : nums) {
            numSet.insert(num);
        }

        std::vector<int> missingNumbers;


        for (int i = 1; i <= n; ++i) {
            if (numSet.find(i) == numSet.end()) {
                missingNumbers.push_back(i);
            }
        }

        return missingNumbers;
    }
};
