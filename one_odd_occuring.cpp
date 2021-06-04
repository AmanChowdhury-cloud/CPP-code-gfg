#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,3,2,1,1,5,5};
    int res=0;
    for(int i=0;i<7;i++)
    {
        res=res^arr[i];
    }
    cout<<res;
}
