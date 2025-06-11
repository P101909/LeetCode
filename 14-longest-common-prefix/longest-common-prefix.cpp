class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // find the size of the first strign
        int size = strs[0].length();
        // compare first string to all other ones
        string ans = "";
        for (int j = 0; j < size; j++) {
            for (int i = 1; i < strs.size(); i++ ) {
                if (strs[0][j] != strs[i][j])
                    return ans;
            }
            ans = ans + strs [0][j];
        }
        return ans;
    }
};