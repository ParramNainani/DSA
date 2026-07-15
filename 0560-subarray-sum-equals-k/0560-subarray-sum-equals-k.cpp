class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> arr;
        arr[0] = 1;
        int count=0;
        int cs = 0;
        int need = 0;
        for(int i=0;i<nums.size();i++){
            cs += nums[i]; 
            need = cs - k;
            if(arr.contains(need)){
                count += arr[need];
            }
            arr[cs]++;
            
        }

        return count;
    }
};