class Solution {
public:
    int countDigit(int n) {
        int c=0;
        while(n){
            c++;
            n=n/10;
        }
         return c;
    }
};
