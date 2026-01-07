#include<iostream>
using namespace std;
int main()
{

int arr[]={2,3,1,4,5};
int ans =INT8_MAX;
for(int i=0;i<5;i++)
{
    if(arr[i]<ans)
    ans=arr[i];
}
cout<<"the first smallest in the array  is "<<ans<<" ";

 return 0;
}