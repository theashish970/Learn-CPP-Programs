#include<iostream>
#include<limits.h>

using namespace std;


void find_max_min(int arr[],int size)
{
    int max_num = INT_MIN;
    int min_num = INT_MAX;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max_num)
        {
            max_num = arr[i];
        }
    }
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min_num)
        {
            min_num = arr[i];
        }
    }
    
    cout<<"Maximum and mininum numbers present in the array are " << max_num << " and " << min_num << "respectively." ;
}

int main()
{
    int arr[10];
    cout<<"Enter 10 elements in the array: "<<endl;
    for(int i=0;i<10;i++){
    cin>>arr[i];
    }
    
    int size=10;
    
    
    
    find_max_min(arr,size);
    
    return 0;
}