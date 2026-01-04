class Solution {
public:
    int reverseNumber(int n) {
        int newN=0;
        while(n){
            int dig=n%10;
            newN=newN*10+dig;
            n=n/10;
        }
        return newN;
    }
};
