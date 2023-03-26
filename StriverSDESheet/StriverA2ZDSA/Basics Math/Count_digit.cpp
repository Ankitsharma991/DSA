// Given a number N. Count the number of digits in N which evenly divides N.

// Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

class Solution{
public:
    int evenlyDivides(int N){
        //code here
         int count = 0;
        int n = N;
        while(N) {
            int digit = N % 10;
            if(digit != 0 && n % digit == 0)
                count++;
            N /= 10;
        }
        return count;
    }
};