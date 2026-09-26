class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int index =0  ; int i = 0;
        while(nums[index] != -1){
            index = nums[i];
            nums[i] = -1;
            i = index;
        }
        return index;
    }
};