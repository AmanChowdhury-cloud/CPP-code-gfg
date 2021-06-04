#include<iostream>
using namespace std;
bool palindrome(string,int,int);

bool palindrome(string str,int start,int end)
{
    if(start>=end)
        return true;
    return(str[start]==str[end])&&palindrome(str,start+1,end-1);
}
int main()
{
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int start=0;
    int end=str.length()-1;
    if(palindrome(str,start,end))
        cout<<"It is palindrome ";
    else
        cout<<"It is not a palindrome ";
}
