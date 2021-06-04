#include<iostream>
using namespace std;
int main()
{

    int n,k;
    cout<<"Enter n and the k : ";
    cin>>n>>k;
    if(n&(1<<(k-1))!=0)//(((n>>(k-1))&1)==1)
        cout<<"Yes";
    else
        cout<<"No";
}

