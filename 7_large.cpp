#include<iostream>
using namespace std;
int main()

{
int arr[]={2,3,4,1,32,2,1};
int n=sizeof(arr)/sizeof(arr[0]);
int ans=arr[0];

for(int i=1;i<n;i++)
{    
    ans=max(ans,arr[i]);
   
}

cout<<ans<<" ";
return 0;
}