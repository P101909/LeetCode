class Solution {
public:
    bool isAnagram(string s, string t) {
        //if they are not the same size, just return false
        if (s.length() != t.length())
            return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int s1 = s.length();
        for (int i = 0; i<s1; i++) {
            if (s[i] != t[i])
                return false;
        }
        return true;
    }
};