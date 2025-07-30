#include<iostream>
#include<vector>

using namespace std;

int FirstOccurance(int arr[], int size, int target)
{
    int start = 0;
    int end = 11;
    int mid = start + (end-start)/2;
    
    int ans = -1;
    
    while(start<=end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            
            end = mid - 1;
            
        }
        else if(target>arr[mid])
        {
            start = mid +1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return ans;
}

int main()
{
    int arr[] = {1,2,3,3,3,3,4,5,6,7,8,9};
    int size = 12;
    int target = 3;
    
    int FirstIndex = FirstOccurance(arr,size,target);
    
    if(FirstIndex == -1)
    {
        cout<<"Target Not Found!";
    }
    else{
        cout<<"First Occurance of the target was at index "<<FirstIndex;
    }
    
    return 0;
}