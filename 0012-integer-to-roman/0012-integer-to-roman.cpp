class Solution {
public:
    string intToRoman(int num) {
        int i=0;
        string ans = "";
        vector<int> nums= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> vals = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        while(num >0){
            if(num >= nums[i]){
                ans.append(vals[i]);
                num = num - nums[i];
            } else{
                i++;
            }
        }
        return ans;
    }
};