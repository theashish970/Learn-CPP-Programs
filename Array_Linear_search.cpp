#include<iostream>
using namespace std;


void LinearSearch(int arr[],int size,int key)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            flag++;
        }
    }
    
    if(flag)
    {
        cout<<"Key Value Found!";
    }
    else
    {
        cout<<"Key Value NOt Found!";
    }
    
    
}
int main()
{
    int arr[10];
    int size=10;
    cout<<"Enter values into the array of size "<< size << endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key value u want to search in the array:";
    cin>>key;
    
    LinearSearch(arr,size,key);
    return 0;
    
}