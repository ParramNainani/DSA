class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int digSum = 1; 
            int z = n;
            while(z > 0){
                int rem = z%10;
                digSum *= rem;
                z = z/10;
            }

            if(digSum % t == 0){
                return n;
            }
            else{
                n += 1;
            }
        }
    }
};