// For a given 3 digit number, find whether it is armstrong number or not. An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. Return "Yes" if it is a armstrong number else return "No".
// NOTE: 371 is an Armstrong number since 33 + 73 + 13 = 371
#include<iostream>
#include<string>
using namespace std;

class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int result = 0;
        int num = n;
        while(n){
            int ld = n%10;
            result = result + (ld*ld*ld);
            n=n/10;
        }
        if(result == num){
            return "Yes";
        }
        return "No";
    }
};