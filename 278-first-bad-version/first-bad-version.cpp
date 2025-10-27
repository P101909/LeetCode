// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        // Do a binary search and call recursivley

        // Base Case:
        if (isBadVersion(n) && !isBadVersion(n - 1))
            return n;

        // Recursive Case:

        if (isBadVersion(n/2)){
            return firstBadVersion(n / 2);
        }
        else
            return firstBadVersion(n - 1 );
        
    }
};