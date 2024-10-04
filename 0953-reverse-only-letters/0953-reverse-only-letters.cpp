class Solution {
public:
    string reverseOnlyLetters(string s) {
        for(int i = 0, j = s.length() -1; i < j;i++,j--){
            if(!isalpha(s[i])){
                j++;
                continue;
            }
            if(!isalpha(s[j])){
                i--;
                continue;
            }
            swap(s[i],s[j]);
        }
        return s;
    }
    
};