/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int start=0;
    int end = size - 1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    cout<<"Reverse of array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}