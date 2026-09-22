class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> new1(0,n);
        for(int i = 0 ; i <= n ; i++){
            if(i == n){
                i = 0;
            }
            if(new1.size() == 2*n){
                return new1;
            }
            new1.push_back(nums[i]);
        }
        return new1;
    }
};