#include<iostream>

using namespace std;

void cout0s1s(int arr[],int size)
{
    int count=0, flag=0;
    
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else
        {
            flag++;
        }
    }
    
    cout<<"Number of 0s and 1s are "<< flag <<"and"<< count;
}

int main()
{
    int arr[20];
    int size=20;
    cout<<"Enter an array of 0s and 1s only and the size of the array should be "<< size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout0s1s(arr,size);
    
    return 0;
}