class Solution {
public:
    bool isPalindrome(string s) {
        string search = "0123456789abcdefghijlkmnopqrstuvwxyz";
        string k = "";
        for(char x : s){
            x = std::tolower(x);
            if(search.contains(x)){
                k+=x;
            }
            else{
                continue;
            }
        };

        int left = 0;
        int right = k.size()-1;
        while(left < right){
            if(k[left] != k[right]){
                return false;
            }
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};