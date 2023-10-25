// Hashing is pre-storing and fetching
// max size of array that can be declared globally is 10e7 and in the main function is 10e6 [int array]
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Pre compute
    int hash[13] = {0};
    for(int i=0; i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<hash[number]<<endl;
    }

    return 0;
}