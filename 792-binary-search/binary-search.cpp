class Solution {
public:
    int search(vector<int>& nums, int target) {
        // If only one element, just return index 0 if it is the target
        int size = nums.size();
        if (size == 1 && target == nums[0])
            return 0;
        //If two elemnts
        if (size == 2) {
            if (nums[0] == target)
                return 0;
            if (nums[1] == target)
                return 1;
        }
        int i = 0;                  // For the min index
        int j = size - 1;           // For the max index
        int k = floor((i + j) / 2); // For the mid index
        int index = 0;              // For the index if we have the target;
        while (i<=j) {
            if (nums[k] == target)
                return k;
            if (target > nums[k])
                i = k + 1;
            else
                j = k - 1;
            cout << k;
            k = floor((i + j) / 2);
            cout<<k;
            cout << i << j << k <<endl;
           // if ((i == j || i == k || j == k) && nums[k] != target)
             //   return -1;
        }
        return -1;
    }
};