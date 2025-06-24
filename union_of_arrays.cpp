#include<iostream>
#include<vector>

using namespace std;

void mergeArrays(vector<int>arr,vector<int>brr)
{
    vector<int>ans;
    
    for(int i=0;i<arr.size();i++)
    {
        ans.push_back(arr[i]);
    }
    
    for(int i=0;i<brr.size();i++)
    {
        ans.push_back(brr[i]);
    }
    
    cout<<"union of two arrays is "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}

int main()
{
    //input array size: both arrays have same size
    int size;
    cout<<"Enter the size of array u want: "<<endl;
    cin>>size;

    //vectors declaration
    vector<int>arr(size);
    
    cout<<"Enter elements of 1st array: "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    
    vector<int>brr(size);
    cout<<"Enter elements of 2nd array: "<<endl;
    for(int i=0;i<brr.size();i++)
    {
        cin>>brr[i];
    }
    
    mergeArrays(arr,brr);
    
    
    return 0;
}