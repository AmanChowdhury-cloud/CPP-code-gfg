#include<iostream>
using namespace std;
int add(int);

int add(int n)
{
    if(n<=9)
        return n;
    return n%10+add(n/10);
}
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<"Sum of digits = "<<add(n);
    return 0;
}
