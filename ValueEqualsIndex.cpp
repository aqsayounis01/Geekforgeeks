#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        if(i+1==arr[i])
	        {
	            v.push_back(arr[i]);
	        }
	        
	        
	    }
	   // if(v.size()==0)
	   // {
	   //     return -1;
	   // }
	    return v;
	}
};