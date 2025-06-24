#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of this vector: "<<endl;
    cin>>size;
    vector <int> arr(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    //printing the elements, size and capacity of the vector
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    cout<<"Size of arr is "<<arr.size()<<endl;
    cout<<"Capacity of arr is "<<arr.capacity()<<endl;
    
    return 0;
}