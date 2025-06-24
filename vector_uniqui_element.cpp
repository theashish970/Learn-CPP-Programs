#include<iostream>
#include<vector>

using namespace std;

int findUnique(vector<int> arr)
{
    int ans=0;
    
    for(int i=0;i<arr.size();i++)
    {
        ans = ans ^ arr[i];
    }
    
    return ans; 
}

int main()
{
    // size of vector
    int size;
    cout<<"Enter the size of array: "<<endl;
    cin>>size;

    //vector declaration    
    vector <int> arr(size);
    
    //vector initialize
    cout<<"Elements in the array are: "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    // created a variable to store value came from findUnique funtion    
    int uniqueElement = findUnique(arr);
    
    //output
    cout<<"Unique element present in the array is "<<uniqueElement<<endl;
    
    return 0;
}