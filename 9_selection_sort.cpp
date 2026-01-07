#include<iostream>
using namespace std;
int main()
{

int arr[]={65,35,34,54,23};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++)
{
    int min1=i;   // not need to store the value just store the index 
    for(int j=i+1;j<n;j++)
    {
      if(arr[j]<arr[i])
      {
        min1=j;
      }
    swap(arr[min1],arr[i]);
    }
}   
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}