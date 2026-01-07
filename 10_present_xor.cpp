#include<iostream>
using namespace std;
int main()
{

int arr[]={2,3,4,5,6};
int arr1[]={2,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
int n1=sizeof(arr1)/sizeof(arr1[0]);
int ans=0;
for(int i=0;i<n;i++)
{
ans=ans^arr[i];
}
for(int i=0;i<n1;i++)
{
ans=ans^arr1[i];
}

cout<<ans<<" ";

    return 0;
}