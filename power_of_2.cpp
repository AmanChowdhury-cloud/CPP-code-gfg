#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    if(n==0)
        cout<<"Not a power of 2 ";

    else if((n&(n-1))==0)
        cout<<"Power of 2";
    else
        cout<<"Not a power of 2";

}
