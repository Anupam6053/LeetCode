class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        for (int i = 0; i < strs[0].size(); i++) {
            char s = strs[0][i];  
            for (int j =0; j < strs.size(); j++) { 
                if (i >= strs[j].size() || strs[j][i] != s) {
                    return strs[0].substr(0, i); 
                }
            }
        }

        
        return strs[0];
    }
};
