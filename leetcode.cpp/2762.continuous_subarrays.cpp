class Solution {
    #define ll long long
public:
    long long continuousSubarrays(vector<int>& nums) {
        int l=0;
        int r;
        int n= nums.size();
        int w_max= INT_MIN;
        int w_min= INT_MAX;
        ll w_size;
        ll c=0 ;

        for(r=0; r<n; r++){
            w_max= max(w_max,nums[r]);
            w_min= min(w_min,nums[r]);

            if((w_max-w_min) > 2){
                w_size= r-l;
                c += (w_size*(w_size+1))/2;
                l=r;

                w_max= nums[r];
                w_min= nums[r];

                while(abs(nums[r]-nums[l-1])<=2){
                    l--;
            
                    w_max= max(w_max,nums[l]);
                    w_min= min(w_min,nums[l]);
                }

                if(l<r){
                    w_size= r-l;
                    c -= (w_size*(w_size+1))/2;
                }
            }
        }
        w_size=r-l;
        c += (w_size*(w_size+1))/2;
        return c;
    }
};
