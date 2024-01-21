#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=6;
    int a[]={16,17,4,3,5,2};
    vector<int> v;
        int b=0;
        for(int i=0;i<n-1;i++)
        {
            b=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    b=1;
                    break;
                }
                
            }
            if(b==0)
            {
                v.push_back(a[i]);
            }
        }
        v.push_back(a[n-1]);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
}