class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int x;
        for( int i = 0; i<n-1; i++){
             x = nums[i];
             if(x==nums[i+1])
                return true;
        }
        return false;
    }
};