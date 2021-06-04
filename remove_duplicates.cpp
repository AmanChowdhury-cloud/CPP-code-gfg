//Remove duplicates elements from a sorted array
#include<iostream>
using namespace std;
int main()
{
    int res=1;
   int arr[]={10,20,20,30,40};
   for(int i=1;i<5;i++)
   {
       if(arr[i]!=arr[res-1])
       {
           arr[res]=arr[i];
           res++;
       }
   }
   for(int i=0;i<res;i++)
    cout<<arr[i]<<" ";
}
