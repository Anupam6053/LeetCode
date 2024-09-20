class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s = 0;
        int e = arr.size() - k;
        
        
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (x - arr[mid] > arr[mid + k] - x) {
                s = mid + 1;  
            } else {
                e = mid;      
            }
        }
        
        
        vector<int> ans;
        ans.reserve(k);  
        
       
        for (int i = 0; i < k; ++i) {
            ans.push_back(arr[s + i]);
        }
        
        return ans;
    }
};
