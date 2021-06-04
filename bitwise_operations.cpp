#include<iostream>
using namespace std;
int main()
{
    int x=3,y=6;
    cout<<(x&y)<<endl;//Bitwise and
    cout<<(x|y)<<endl;//Bitwise or
    cout<<(x^y)<<endl;//Bitwise Xor
    cout<<"Left shift " <<endl;
    cout<<(x<<1)<<endl;
    cout<<(x<<2)<<endl;//left shift operator
    y=4;
    cout<<(x<<y)<<endl;//Equivalent to x*2^y
    cout<<"Right shift "<<endl;
    x=33;
    cout<<(x>>1)<<endl;//Right shift operator
    cout<<(x>>2)<<endl;
    cout<<(x>>y)<<endl;//Equivalent to floor(x/2^y)
   unsigned int x1=1;
    cout<<(~x1)<<endl;//bitwise not
    return 0;
}
