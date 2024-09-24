#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
  
    int findMax(const vector<int>& piles) {
        int maxi = INT_MIN;
        for (int i = 0; i < piles.size(); ++i) {
            int pile = piles[i];
            maxi = max(maxi, pile);
        }
        return maxi;
    }

   
    long long calculateTotalHours(const vector<int>& piles, int k) {
        long long totalH = 0;  
        for (int i = 0; i < piles.size(); ++i) {
            int pile = piles[i];
            totalH += (pile + k - 1) / k; 
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = findMax(piles);
      
        while (low <= high) {
            int mid = low + (high - low) / 2;  
            long long totalH = calculateTotalHours(piles, mid);  

            if (totalH <= h) {
 
                high = mid - 1;
            } else {
                
                low = mid + 1;
            }
        }

      
        return low;
    }
};
