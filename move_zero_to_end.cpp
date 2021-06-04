#include<iostream>
using namespace std;
int main()
{
    int arr[]={9,0,0,5,6};
    int count=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}
