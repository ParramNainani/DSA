class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n =nums.size();
        int sum = INT_MIN;
        int cs = 0;
        int total = 0; 
        for(int i=0;i<n;i++){
            total+=nums[i];
        }
        for(int i = 0 ; i < n ; i++){
            cs += nums[i];
            sum = max(sum,cs);
            if(cs < 0){
                cs =0;
            }
        }
        int cmin =0;
        int mins = INT_MAX; 
        for(int i = 0; i <n ;i++){
            cmin += nums[i];
            mins = min(mins , cmin);
            if(cmin > 0){
                cmin = 0;
            }
        }
        if(sum < 0){
            return sum;
        }
        return max(sum , total - mins);
    }
};