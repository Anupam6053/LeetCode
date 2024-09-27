#include <vector>
using namespace std;

class Solution {
public:
    int firstOccurrence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int result = -1;  
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                result = mid;  
                e = mid - 1;   
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return result;
    }

    int lastOccurrence(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int result = -1; 
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                result = mid;  
                s = mid + 1;   
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2); 
        ans[0] = firstOccurrence(nums, target);
        ans[1] = lastOccurrence(nums, target);
        return ans; 
    }
};
