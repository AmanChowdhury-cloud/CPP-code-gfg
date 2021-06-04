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
    int left_arr[n],right_arr[n];
     left_arr[0]=arr[0];
     right_arr[n-1]=arr[n-1];

    for(int i=1;i<n;i++)
    {
        left_arr[i]=max(arr[i],left_arr[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        right_arr[i]=max(arr[i],right_arr[i+1]);
    }
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        res=res+(min(left_arr[i],right_arr[i])-arr[i]);
    }
    cout<<res;
}
