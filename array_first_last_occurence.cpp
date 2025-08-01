#include <iostream>
using namespace std;

int firstOccurence(int arr[],int size, int target)
{
	int start=0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ans = -1;
    
    while(start<=end)
    {
    	if(arr[mid]==target)
        {
        	ans = mid;
             end = mid -1;
            //start = mid + 1;
        }
        else if(arr[mid]>target)
        {
        	end = mid -1;
        }
        else
        {
        	start = mid +1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return ans;

}

int LastOccurence(int brr[],int size, int target)
{
	int start=0;
    int end = size -1;
    int mid = start + (end-start)/2;
    int ons = -1;
    
    while(start<=end)
    {
    	if(brr[mid]==target)
        {
        	ons = mid;
            // end = mid -1;
            start = mid + 1;
        }
        else if(brr[mid]>target)
        {
        	end = mid -1;
        }
        else
        {
        	start = mid +1;
        }
        
        mid = start + (end - start)/2;
    }
    
    return ons;

}


int main() {
  int arr[] = {1,2,3,3,3,3,4,4,4,4,4,4,4,4,5,7,7,7,9,10};
  int size = 20;
  int target = 7;
  
  int flag = firstOccurence(arr,size,target);
  int tag = LastOccurence(arr,size,target);
  
  cout<<"first ans last occurences"<<flag<<"and"<<tag<<"respectively."<<endl;
  
  
  
  return 0;
}

