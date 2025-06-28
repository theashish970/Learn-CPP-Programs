#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    
    int size=9;
    
    int start=0;
    int end=size-1;
    
    while(start<=end){
        if(start==end)
        {
            cout<<arr[start]<<endl;
        }
        
        else{
            cout<<arr[start];
            cout<<arr[end];
            
        }
        start++;
            end--;
    }
    
    return 0;
    
}