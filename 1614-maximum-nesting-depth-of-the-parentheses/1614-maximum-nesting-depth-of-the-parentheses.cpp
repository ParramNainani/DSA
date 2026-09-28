class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int maxOpen = 0;
        for (char x : s){
            if(x == '('){
                open++;
                if(maxOpen < open){
                    maxOpen = open;
                }
            }
            else if(x == ')'){
                open--;
                if(maxOpen < open){
                    maxOpen = open;
                }
            }
        }
        return maxOpen;
    }
};