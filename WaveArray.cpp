#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> arr={1,2,3,4,5,6};

    int temp=0;
            for(int i=0,j=0;j<arr.size()/2;i+=2,j++)
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        
        for(int i=0;i<arr.size();i++)
        {
            cout<<arr[i]<<" ";
        }
    

}