#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=arr[1]-arr[0],minval=arr[0];
    for(int i=1;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    cout<<res;
}
