class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        
        while (i < j) {

            while (i < j && !((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57))) {
                i++;
            }
            
            while (i < j && !((s[j] >= 65 && s[j] <= 90) || (s[j] >= 97 && s[j] <= 122) || (s[j] >= 48 && s[j] <= 57))) {
                j--;
            }

 
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
            if (s[j] >= 65 && s[j] <= 90) {
                s[j] += 32;
            }

           
            if (s[i] != s[j]) {
                return false;
            }
            
            i++;
            j--;
        }
        
        return true;
    }
};
