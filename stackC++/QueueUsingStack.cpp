#include<bits/stdc++.h>
using namespace std;

class queue{
    stack<int> s1;
    stack<int> s2;

    void push(int n){
        s1.push(n);
    }

    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty!!"<<endl;
            return -1;
        }
        if(s2.empty()){
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }    
        }
        int topValue = s2.top();
        s2.pop();
        return topValue;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }
}


int main(){
    
    return 0;
}