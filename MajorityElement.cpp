//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int c=1;
        int sz=size/2;
        sort(a,a+size);
        if(size==1)
        {
            return a[0];
        }
        for(int i=0;i<size;i++)
        {
            if(i+1 < size && a[i+1]==a[i])
            {
                c++;
                if(c>sz)
                {
                    return a[i];
                }
            }
            else
            {
               c=1;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends