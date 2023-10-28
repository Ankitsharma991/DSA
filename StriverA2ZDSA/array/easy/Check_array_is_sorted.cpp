#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {5,1,4,6,8};
    bool result = true;
    for(int i=0;i<4;i++){
        if(arr[i]>arr[i+1]){
            result = false;
            break;
        }
    }
    cout<<result<<endl;
    
    return 0;
}