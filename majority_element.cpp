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
    int count =1;
    int res=0;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
            c++;
    }
    if(c<=n/2)
        cout<<"No majority elements ";
    else
        cout<<"Majority element at position : "<<res;
}
