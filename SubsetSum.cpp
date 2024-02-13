//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

class Solution
{
public:
    
   void   rec(vector<int>v,int ind,int ans,vector<int>&v2)
    {
        if(ind==0)
        {
            v2.push_back(ans);
            
            cout<<ans<<endl;
          return;
        }
        
        rec(v,ind-1,ans,v2); 
        
        rec(v,ind-1,ans+v[ind-1],v2);
       
        
    }
  
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int ans=0;
        int ind=arr.size();
        // vector<int> v1;
        vector<int> v2;
        
        rec(arr,ind,ans,v2);
        
        
        return v2;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans1 = ob.subsetSums(arr,N);
        // sort(ans.begin(),ans.end());
        // for(auto sum : ans){
        //     cout<< sum<<" ";
        // }
        // cout<<endl;
    }
    return 0;
}
// } Driver Code Ends