class Solution {
public:
    int numberOfSets(int n, int k) {
        const long long MOD = 1000000007LL;
        int N = n+k-1;
        int R = 2*k;
        long long num = 1 , den = 1; 
        for(int i = 0 ; i < R; i++){
            num = (num * (N-i)) % MOD;
            den = (den * (i+1)) % MOD;
        }
        long long base = den; 
        long long power = MOD -2;
        long long inverse = 1;

        while(power){
            if(power&1){
                inverse = inverse*base  % MOD;
            }
            base = base*base%MOD;
            power >>= 1;
        }

        return num*inverse % MOD;
    }
};