#include<iostream>
using namespace std;

int find_key(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    
    return false;
}

int main()
{
    int arr[10];
    cout<<"Enter any array of size 10: "<<endl;
    for(int i=0;i<10;i++){
    cin>>arr[i];
    }
    
    int key;
    cout<<"Enter a key value u want to find in array: "<<endl;
    cin>>key;
    int size=10;
    
    int result = find_key(arr,size,key);
    
    if(result)
    {
        cout<<"found";
    }
    
    else
    {
        cout<<"not found";
    }
    return 0;
}