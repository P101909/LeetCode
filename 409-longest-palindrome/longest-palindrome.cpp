class Solution {
public:
    int longestPalindrome(string s) {

        // We can put how many of each letter we have in a map
        // The biggest Plaindrome is the sum of evens plus one central letter
        int sum = 0;
        map<char, int> letters;
        bool centralbit = false;
        int i = 0;
        while (s[i]) {
            letters[s[i]] += 1;
            i++;
        }
        int j = 0;
        while (s[j]) {
            if (isEven(letters[s[j]]))
                sum += letters[s[j]];
            else {
                if (letters[s[j]] == 1 && centralbit == false) {
                    sum++;
                    centralbit = true;
                }
                else if (letters[s[j]] > 1 && centralbit == false) {
                    sum += letters[s[j]];
                    centralbit = true;
                }
                else if (letters[s[j]] > 1 && centralbit == true)
                    sum = sum + letters[s[j]] - 1; // We already accounted for the central bit
            }
            letters[s[j]] = 0; // To avoid overcounting
            j++;
        }
        return sum;
    }
    bool isEven(int num) { return (num % 2 == 0); }
};