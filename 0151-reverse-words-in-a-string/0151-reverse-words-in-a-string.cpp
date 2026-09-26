class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end = 0;
        string ans = "";
        int i = s.size() -1 ;
        while(i >= 0){
            while(i >= 0 && s[i] == ' '){
                i--;
            }
            if(i < 0) break;
            end = i;
            while(i >= 0 && s[i] != ' '){
                i--;
            }
            start = i+1;
            if(!ans.empty()){
                ans+=' ';
            }
            ans += s.substr(start , end - start +1);
        }
        return ans;
    }
};