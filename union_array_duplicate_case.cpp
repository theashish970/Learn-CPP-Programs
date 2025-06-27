#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

void unionArray(vector<int>crr , vector<int>drr)
{
    vector<int>ans;
    
    int key=0;
    
    for(int i=0;i<crr.size();i++)
    {
        key = crr[i];
        for(int j=0;j<drr.size();j++)
        {
            if(key==drr[j])
            {
                drr[j]=INT_MIN;
            }
        }
    }
    
    for(int i=0;i<crr.size();i++)
    {
        ans.push_back(crr[i]);
    }
    
    for(int i=0;i<drr.size();i++)
    {
        if(drr[i]!=INT_MIN)
        {
            ans.push_back(drr[i]);
        }
    }
    
    cout<<"Union of two arrays with consideration of duplicte elements is "<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    
}
int main()
{
    int n;
    cout<<"Enter the size of array arr: "<<endl;
    cin>>n;
    int m;
    cout<<"Enter the size of array brr: "<<endl;
    cin>>m;
    
    vector<int>arr(n);
    vector<int>brr(m);
    
    cout<<"Enter the elements of array arr :"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
        
    }
    
    cout<<"Enter the elements of array brr :"<<endl;
    for(int i=0;i<brr.size();i++)
    {
        cin>>brr[i];
        
    }
    
    unionArray(arr,brr);
    
    return 0;
}
