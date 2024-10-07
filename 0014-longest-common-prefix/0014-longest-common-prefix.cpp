class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        for (int i = 0; i < strs[0].size(); i++) {
            char s = strs[0][i];  // Character to check in each string
            for (int j = 1; j < strs.size(); j++) {  // Start from 1 since strs[0] is the reference
                if (i >= strs[j].size() || strs[j][i] != s) {
                    return strs[0].substr(0, i);  // Return common prefix up to index 'i'
                }
            }
        }

        // If no mismatch was found, return the entire first string
        return strs[0];
    }
};
