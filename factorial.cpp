#include<iostream>
using namespace std;
int fact(int);
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<fact(n);

}
int fact(int n)
{

    if(n==0)
        return 1;

    return n*fact(n-1);
}
