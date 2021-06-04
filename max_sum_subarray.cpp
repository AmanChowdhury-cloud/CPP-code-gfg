#include<iostream>
using namespace std;
int main()
{
    int arr[]={-3,8,-2,4,-5,6};
    int res=arr[0],max_end=arr[0];
    for(int i=1;i<6;i++)
    {
        max_end=max(arr[i]+max_end,arr[i]);
        res=max(res,max_end);
    }
    cout<<res;
}
