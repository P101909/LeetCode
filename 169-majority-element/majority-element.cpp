class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int, int> frequency;
        for (int i  = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;
            if (frequency[nums[i]] > floor(nums.size()/2))
                return nums[i];
        }

        return 0;
    }
};