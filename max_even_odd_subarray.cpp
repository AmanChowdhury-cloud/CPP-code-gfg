#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<" Enter the elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1,res=1;
    for(int i=0;i<n-1;i++)
    {
        if((arr[i]%2==0&&arr[i+1]%2!=0)||(arr[i]%2!=0&&arr[i+1]%2==0))
        {
            count++;
            res=max(res,count);
        }
        else
            count=1;


    }
    cout<<res;
}
