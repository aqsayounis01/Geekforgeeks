#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // int c=1;
        sort(array.begin(),array.end());
        for(int i=0;i<n;i++)
        {
            if(array[i]==i+1)
            {
                // cout<<array[i]<<" "<<i+1<<endl;
                continue;
            }
            else
            {
                return i+1;
            }
        }
    }
};
                  

                  