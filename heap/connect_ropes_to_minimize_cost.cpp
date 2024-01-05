#include <bits/stdc++.h>
using namespace std;

int minCost(vector<int> &ropes)
{
    priority_queue<int, vector<int>, greater<int>> minHp;
    for (auto it : ropes)
    {
        minHp.push(it);
    }

    int cost = 0;

    while (minHp.size() >= 2)
    {
        int first = minHp.top();
        minHp.pop();
        int second = minHp.top();
        minHp.pop();
        cost = cost + first + second;
        minHp.push(first + second);
    }
    return cost;
}

int main()
{

    vector<int> ropes;

    return 0;
}