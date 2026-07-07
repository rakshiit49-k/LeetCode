class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int x=0,pow=1,sum=0,rem;
        while(n>0){
            rem=n%10;
            if(rem!=0){
                x+=rem*pow;
                sum+=rem;
                pow*=10;
            }
            n=n/10;
        }
        return sum*x;
    }
};