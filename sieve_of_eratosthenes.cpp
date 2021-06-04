#include<iostream>
#include<vector>
using namespace std;
int main()
{

    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    vector<bool> isprime(n+1,true);
    for(int i=2;i<=n;i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
                isprime[j]=false;
        }
    }
}

