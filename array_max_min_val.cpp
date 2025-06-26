#include<iostream>
#include<limits.h>

using namespace std;

void max_min_val(int arr[],int size)
{
    int max = INT_MIN;
    int min = INT_MAX;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    
    cout<<"Maximum and minimum number is the give array is " << max << "and" << min ;
}

int main()
{
    int arr[20];
    int size = 20;
    cout<<"Enter an array of size "<< size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    max_min_val(arr,size);
    
    return 0;
}