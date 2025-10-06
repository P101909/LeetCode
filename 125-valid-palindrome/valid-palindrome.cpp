class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) { return !isalnum(c); }), s.end());
        // Remove anything that is not alphanumerical by pushing it to the end of the string 
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c); });
        // Make the whole string lower case
        int length = s.length();
        // Now string is all lowercase and all alphanumericals
        string s_reverse = s;
        reverse(s_reverse.begin(), s_reverse.end()); // Find the reverse of the string
        cout << s << endl << s_reverse;
        for (int i = 0; i < length; i++) {
            if (s_reverse[i] != s[i]) {
                // cout << s_reverse[i] << " " << s[i] << endl;
                return false;
            }
        }//If they match
        return true;
    };
};