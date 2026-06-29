class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // vector<vector<int>> trips;
        // set<vector<int>> s;
        // for(int i=0;i<nums.size()-2;i++){
        //     for(int j=i+1; j<nums.size()-1;j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]+nums[k] ==0){
        // //                 vector<int> temp = {nums[i],nums[j],nums[k]};
        // //                 sort(temp.begin() , temp.end());
        // //                 s.insert(temp);
        //             }
        //         }
        //     }
        // }
        // for(auto x:s){
        //     trips.push_back(x);
        // }
        // return trips;

        //     vector<vector<int>> trips;
        //     set<vector<int>> s;
        //     sort(nums.begin(), nums.end());
        //     int n = nums.size();
        //     for(int i = 0; i < n - 2; i++) {
        //         for(int j = i + 1; j < n - 1; j++) {
        //             int target = -(nums[i] + nums[j]);
        //             int start = j + 1;
        //             int end = n - 1;
        //             while(start <= end) {
        //                 int mid = start + (end - start) / 2;
        //                 if(nums[mid] == target) {
        //                     s.insert({nums[i], nums[j], nums[mid]});
        //                     break;
        //                 }
        //                 else if(nums[mid] < target) {
        //                     start = mid + 1;
        //                 }
        //                 else {
        //                     end = mid - 1;
        //                 }
        //             }
        //         }
        //     }
        //     for(auto x : s)
        //         trips.push_back(x);
        //     return trips;
        // }
        
        vector<vector<int>> trips;
        set<vector<int>> s;
        sort(nums.begin() , nums.end());
        int left = 0;
        int right = 0;
        for(int i= 0 ; i<nums.size();i++){
                left = i+1;
                right = nums.size()-1;
                while(left < right){
                    int sum = nums[i] + nums[left] + nums[right];
                    if(sum==0){
                        s.insert({nums[i],nums[left],nums[right]});
                        left++;
                        right--;
                    }
                    else if(sum > 0){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
            for(auto x:s){
                trips.push_back(x);
            }
            return trips;
        }
        
};