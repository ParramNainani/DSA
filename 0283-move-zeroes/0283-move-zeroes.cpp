class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                continue;
            }
            else{
                swap(nums[insert],nums[i]);
                insert++;
            }

        }

    }
};