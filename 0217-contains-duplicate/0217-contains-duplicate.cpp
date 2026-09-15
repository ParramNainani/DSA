class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> set1;
        for(int i : nums){
            if(set1.count(i)){
                return true;
            }
            set1.insert(i);
        }
        return false;
    }
};