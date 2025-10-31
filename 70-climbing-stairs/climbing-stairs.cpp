class Solution {
public:
    int climbStairs(int n) {

        // To get to the nth step, (n > 2) we can either take one step from n - 1
        // or two steps from n - 2, so total ways is how many ways we can get to 
        // n - 1 + how many ways we can get to step n - 2 

        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        
        // Store everything inside a hash map
        map <int, int> ways;
        ways[1] = 1;
        ways[2] = 2;
        for (int i = 3; i <= n; i++) {
            ways[i] = ways[i - 1] + ways[i - 2];
        }

        return ways[n];
    }
};