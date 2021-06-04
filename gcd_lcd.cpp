#include<iostream>
using namespace std;
int hcf(int,int);
int lcm(int,int);
int main()
{
    int a,b;
    cout<<"Enter two nos. : ";
    cin>>a>>b;
    cout<<"HCF = "<<hcf(a,b)<<endl;;
    cout<<"LCM = "<<lcm(a,b)<<endl;

}
int hcf(int a,int b)  // Euclidean algorithm
{
    if(b==0)
        return a;

    return hcf(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/hcf(a,b);
}
