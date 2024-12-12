class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> new_set(nums.begin(),nums.end());
        return new_set.size()< nums.size();
    }
};
