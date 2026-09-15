class Solution {
public:
    int maxPalindromes(string s, int k) {
        int count = 0;
        int lastend = -1;
        string z = "";
        string t = "";
        for(int end = k-1 ; end < s.size() ; end++){
            for(int start = lastend+1 ; start <= end - k + 1 ; start++){
                z = s.substr(start,end-start+1);
                t = z;
                std::reverse(t.begin() , t.end());
                if(z == t){
                    count++;
                    lastend = end;
                    break;
                }
            }
        }
    
        return count;
    }
};