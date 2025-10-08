class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int i = 0;        // For the min index
        int j = size - 1; // For the max index
        int k = 0;        // For the mid index
        while (i <= j) {
            k = floor((i + j) / 2);
            if (nums[k] == target)
                return k;
            if (target > nums[k])
                i = k + 1; // Disregard the left side of the array
            else
                j = k - 1; // Disregard the right side of the array
        }
        return -1;
    }
};