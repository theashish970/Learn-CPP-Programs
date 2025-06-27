#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void pairfind(vector<int>brr)
{
    int element=0;
    
    int n;
    cout<<"Enter the sum u want to check in the array: "<<endl;
    cin>>n;
    
    for(int i=0;i<brr.size();i++)
    {
        element = brr[i];
        for(int j=i+1;j<brr.size();j++)
        {
            if((element+brr[j]==n))
            {
                cout<<element<<","<<brr[j]<<endl;
                brr[j]=INT_MIN;
            }
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of array u want to work on: "<<endl;
    cin>>size;
    
    vector<int>arr(size);
    
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    
    pairfind(arr);
    
    return 0;
}