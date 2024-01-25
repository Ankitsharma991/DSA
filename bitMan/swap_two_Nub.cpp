#include <bits/stdc++.h>
using namespace std;

// void swap(int a, int b)
// {
// }

int main()
{
    int a = 5;
    int b = 7;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    return 0;
}