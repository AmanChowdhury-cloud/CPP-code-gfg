#include<iostream>
#include<cmath>
bool isprime(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    bool a = isprime(n);
    if(a==false)
        cout<<"Not a prime no ";
    else
        cout<<"It is a Prime No. ";
}
bool isprime(int n)
{

    if(n==1)
        return false;
    if(n==2||n==3)
        return true;
    if(n%2==0||n%3==0)
            return false;

    for(int i=5;i<=sqrt(n);i=i+6)
    {


       if(n%i==0||n%(i+2)==0)
            return false;
    }

        return true;

}
