class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        //Sort both strings
        int length = s.length();
        if (length != t.length())//Strings are not equal in size 
            return false;
        for (int i = 0; i < length; i++) {
            if (s[i] != t[i])
                return false;
        }//If they are the same
        return true;
    }
};