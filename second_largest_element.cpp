#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int larg=0;
    int pos=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[larg])
        {
            pos=larg;
            larg=i;
        }
        else if(arr[i]!=arr[larg])
        {
            if(pos==-1||arr[i]>arr[pos])
            {
                pos=i;
            }
        }
    }
    cout<<pos;

}
