class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int length = s.length();
        int length1 = t.length();
        if (length1 != length)
            return false;
        for (int i = 0; i < length; i++) {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};