class Solution {
public:
    bool isPowerOfTwo(int n) {
        // if (n <= 0){
        //     return false;
        // }
        // while(n%2==0){
        //     n = n/2;
        // }
        // return n == 1;

        //without loop 
        if(n==1){
            return true;
        }
        if(n==2){
            return true;
        }
        if(n>2){
            if(n > 0 && (n &(n-1)) == 0){
                return true;
            }
        }
        return false;
    }
};