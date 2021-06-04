#include<iostream>
using namespace std;
void printdigit(int);
void print_digit(int);
int main()
{
    int n;
    cout<<"Enter a no. : ";
    cin>>n;
    printdigit(n);
    cout<<endl;
    print_digit(n);
    return 0;

}
void printdigit(int n)
{
    if(n==0)
        return ;
    cout<<n<<" ";
    printdigit(n-1);
}
void print_digit(int n)
{
    if(n==0)
        return;
    print_digit(n-1);
    cout<<n<<" ";
}
