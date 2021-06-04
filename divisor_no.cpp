#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter a no . : ";
    cin>>n;
    for(i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
            cout<<i<<" ";
    }
    i--;
      for( ;i>=1;i--)
    {
        if(n%i==0)
        {
            cout<<n/i<<" ";
        }

    }
}
