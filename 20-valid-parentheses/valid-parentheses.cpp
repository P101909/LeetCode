class Solution {
public:
    bool isValid(string s) {
        // Create a stack
        stack<char> string;
        // Determine the size
        int size = s.length();
        // If it is odd, return false
        if (size % 2 != 0)
            return false;
        // Have two integers, for opening and clsoing, if they don't match
        // return flase
        int j = 0;
        int k = 0;
        // Go in a for loop and put every char into the stack
        for (int i = 0; i < size; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                string.push(s[i]);
                // If it is an opening, push it on top of the stack
                j++;
            }
            if (s[i] == ')' || s[i] == '}' || s[i] == ']')  {
                k++;
                if (string.size() > 0) {
                    // If it is a closing:
                    // The top of the stack should match this closing, if so:
                    // Pop the opening from the stack, else return false
                    if (s[i] == ')') {
                        if (string.top() != '(') {
                            return false;
                        } else
                            string.pop();
                    }
                    if (s[i] == '}') {
                        if (string.top() != '{') {
                            return false;
                        } else
                            string.pop();
                    }
                    if (s[i] == ']') {
                        if (string.top() != '[') {
                            return false;
                        } else
                            string.pop();
                    }
                }
            }
        }
        if (j != k || string.size() > 0)
            return false;
        // If anythign was not popped from the stack, that means there was no matching pair for it

        return true; // All good
    }
};