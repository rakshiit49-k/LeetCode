class Solution {
public:
    bool isPalindrome(int x) {
        long int rem,rev=0;
        int temp=x;
        while(temp>0){
            rem=temp%10;
            rev=(rev*10)+rem;
            temp/=10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};