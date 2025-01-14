class Solution {
public:
    bool isPalindrome(string &s, int st, int e) {
        while (st < e) {
            if (s[st] != s[e]) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int st = 0;
        int e = s.size() - 1;
        
        while (st < e) {
            if (s[st] != s[e]) {
                return isPalindrome(s, st + 1, e) || isPalindrome(s, st, e - 1);
            }
            st++;
            e--;
        }
        
        return true; 
    }
};
