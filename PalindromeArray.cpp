#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    int PalinArray(int a[], int n)
    {
        int d=0;
        int  r=0;
        string palsum="";
    	for(int i=0;i<n;i++)
    	{
            int temp=a[i];
            palsum="";
    	    for(int j=temp;j>0;)
    	    {
                //111
    	        d=j/10;  //0
    	        r=j%10;  //1
                palsum+=to_string(r);  //111
                j=d; 

    	        
    	    }
            cout<<palsum<<endl;
            if(palsum!=to_string(a[i]))
            {
                return 0;
            }
            // cout<<palsum<<endl;
    	}
        return 1;
    }
};
int main()
{
    Solution s;
    int a[]={111,121,13331};
    int n=3;
    s.PalinArray(a,n);
}