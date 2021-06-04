#include<iostream>
using namespace std;

int reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
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
    int d;
    cout<<"Enter value of D : ";
    cin>>d;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
