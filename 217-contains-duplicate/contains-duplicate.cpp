class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> frequency;
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            frequency[nums[i]]++;
            if (frequency[nums[i]] > 1)
                return true;
        }
        return false;
    }
};