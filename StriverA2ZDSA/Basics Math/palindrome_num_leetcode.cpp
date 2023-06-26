class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int original = x;
        if(x<0){
            return false;
        }
        while(x){
            int digit = x%10;
            rev = rev*10+digit;
            x=x/10;
        }
        if(rev==original){
            return true;
        }
        return false;
    }
};