#include<iostream>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    int count =0;
    while(n>0)//Brian and Kerningham Algorithm
    {
        n=n&(n-1);
        count++;
    }
    cout<<count;

}
