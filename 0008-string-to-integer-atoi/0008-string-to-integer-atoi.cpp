class Solution {
public:
    int myAtoi(string s) {
        long num = 0;
        int sign = 1;
        bool started = false;
        
        for(char x : s){
            if(x == ' ' && !started){
                continue;
            }
            else if((x == '-' || x == '+') && !started){
                if(x == '-') {
                    sign = -1;
                }
                started = true; 
            }
            else if(x >= '0' && x <= '9'){
                started = true;
                num = num * 10 + (int(x) - 48); 
                if(sign == 1 && num >= INT_MAX) return INT_MAX;
                if(sign == -1 && -num <= INT_MIN) return INT_MIN;
            }
            else{
                break;
            }
        }
        return num * sign;
    }
};