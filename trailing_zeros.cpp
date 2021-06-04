#include<iostream>
using namespace std;
int main()
{
    int n,res=0;
    cout<<"Enter a no. : ";
    cin>>n;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    cout<<res;
}
