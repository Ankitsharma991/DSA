//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[], long long l, long long m, long long r)

{

  long long len1=m-l+1;

  long long len2=r-m;

  long long arr1[len1];

  long long arr2[len2];

  for(int i=0;i<len1;i++)

    {

      arr1[i]=arr[i+l];

    }

  for(int i=0;i<len2;i++)

    {

      arr2[i]=arr[i+m+1];

    }

  long long i=0,j=0, k=l;

  long long count=0;

  while(i<len1 && j<len2)

    {

      if(arr1[i]>arr2[j])

      {

          arr[k]=arr2[j];

          j++;

          count+=len1-i;

      }

       else

      {

          arr[k]=arr1[i];

        i++;

      }

      k++;

    }

  while(i<len1)

    {

      arr[k]=arr1[i];

      i++;

      k++;

    }

  while(j<len2)

    {

      arr[k]=arr2[j];

      j++;

      k++;

    }

    return count;

}

long long int mergesort(long long arr[], long long const bgin, long long const end)

{

  long long count=0;

  if(bgin<end)

  {

  auto mid=bgin+(end-bgin)/2;

  count+=mergesort(arr, bgin, mid);

  count+=mergesort(arr, mid+1, end);

  count+=merge(arr, bgin, mid, end);

  }

  return count;

}
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
       return mergesort(arr, 0, N-1);
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}

// } Driver Code Ends