class Solution {
public:
    bool isPalindrome(int n) {
        int newN=0;
        int oldN=n;
        while(n){
            newN=newN*10+n%10;
            n=n/10;
        }
    return newN==oldN;
    }
};
