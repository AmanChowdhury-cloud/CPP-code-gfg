#include<iostream>
using namespace std;
int root(int n)
{

    int low=1,high=n;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int sq=mid*mid;
        if(sq==n)
            return mid;
        else
            if(sq>n)
            high=mid-1;
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    cout<<root(n);
}
