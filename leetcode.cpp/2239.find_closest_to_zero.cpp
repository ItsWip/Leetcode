class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int result = INT_MAX;

        for(int i = 0; i<nums.size(); i++){

            if(abs(nums[i]) <abs(result) || (abs(nums[i]) == abs(result) && nums[i] > result) ){
                result = nums[i];
            }
        }
        return result;
    }
};
