class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix ="";
        for(int i = 0 ; i < strs[0].size() ; i++){
            char curr = strs[0][i];
            for(int j = 0; j < strs.size() ; j++){
                if(i >= strs[j].size() || strs[j][i] != curr){
                    return prefix;
                    
                }
            }
            prefix += curr;
        }
        return prefix;
    }
};