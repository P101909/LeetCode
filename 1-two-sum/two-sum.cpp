class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // First find the size of the Array
        int size = nums.size();
        // cout << size << endl;
        // Simply go in a double for loop and see which indecies add up
        // to the target value
        vector<int> ans;
        for (int i = 0; i < size; i++) {
            for (int j = 1; j < size; j++) {
                // Not adding one elemnt to it self
                if (i != j) {
                    if (nums[i] + nums[j] == target) {
                        ans.push_back(i);
                        ans.push_back(j);
                        return ans;
                    }
                }
            }
        }
        // If there were no matches
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};