// Given an integer, check whether it is a palindrome or not.
#include <iostream>
#include <string>
using namespace std;

class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int rev = 0;
		    int original = n;
		    while(n!=0){
		        int digit = n%10;
		        rev = rev*10+digit;
		        n=n/10;
		    }
		    if(rev==original){
		        return "Yes";
		    }
		    else{
		        return "No";
		    }
		}
};