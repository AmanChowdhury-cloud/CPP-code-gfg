#include<iostream>
using namespace std;
int fibo(int);
int main()
{
     int n;
     cout<<"Enter a no. : ";
     cin>>n;
     cout<<fibo(n);
}
int fibo(int n)
{
    if(n==0||n==1)
        return n;
    return (fibo(n-1)+fibo(n-2));
}
