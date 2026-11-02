class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long i,j=0 ; long long MaxSum = 0; int size = nums.size();
        long long curr_sum = 0;
        unordered_map<int,int>freq;
        for(i = 0 ; i < size; i++){
            curr_sum += nums[i];
            freq[nums[i]]++;
            if(i-j+1 > k){
                curr_sum -= nums[j];
                freq[nums[j]]--;
                if(freq[nums[j]] == 0){
                    freq.erase(nums[j]);
                }
                j++;
            }
            if(i-j+1 == k){
                if (freq.size() == k) {
                    MaxSum = max(MaxSum, curr_sum);
                }
            }
        }
        return MaxSum;

    }
};