class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        bool char_found = false;

        // Traverse the string from the end
        for (int i = s.length() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                // If a non-space character is found, start counting the length of the last word
                length++;
                char_found = true;
            } else if (char_found) {
                // If space is found after a word, stop counting
                break;
            }
        }

        return length;
    }
};
