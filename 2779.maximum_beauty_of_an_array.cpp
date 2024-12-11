class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());

        int c= 0;       //length of sliding window
        int max_c= 0;       
        int l=0, r=0;
        int n= nums.size();

        while(r<n){
            while(r<n && (nums[r] - nums[l] <= 2*k)){
                r++;
                c++;
            }

            max_c= max(max_c,c);
            if(r==n){
                break;
            }

            while(l<r && (nums[r] - nums[l] > 2*k)){
                l++;
                c--;
            }
        }
        return max_c;
    }
};
