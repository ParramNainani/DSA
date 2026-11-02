class Solution {
public:
    int numberOfSubstrings(string s) {
        std::unordered_map<char, int> char_count = {{'a', 0}, {'b', 0}, {'c', 0}};
        int count = 0; 
        int right = 0;
        int n = s.length();
        int left = 0;
        for(auto i :s){
            char_count[i]++;
            while(char_count['a'] > 0 && char_count['b'] > 0 && char_count['c'] > 0){
                count += n-right;
                char_count[s[left]]--;
                left++;
            }
            right++;
        }
        return count;
    }
};