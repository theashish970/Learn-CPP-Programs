#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int target)
{
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    
    while(start<=end)
    {
        int element = arr[mid];
        
        if(element == target){
            return mid;
        }
        
        else if(target<arr[mid])
        {
            end = mid -1;
        }
        
        else
        {
            start = mid +1;
        }
        
        mid = (start+end)/2;
    }
    
    return -1;
}

int main()
{
    int arr[]={2,4,6,8,9,12,23,45};
    int size=8;
    int target=23;
    
    int indexoftarget = BinarySearch(arr,size,target);
    
    if(indexoftarget == -1)
    {
        cout<<"Target not Found!";
    }
    else
    {
        cout<<"Target FOund at index" <<" "<<indexoftarget;
    }
    
    return 0;
}