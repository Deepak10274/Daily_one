#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

int arr[]={1,2,3,4,5,2,1,0};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
{
    arr[i]=arr[i]*arr[i];
}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

cout<<endl;
cout<<"afret the sorting";
cout<<endl;
for(int i=0;i<n-1;i++)
{
   for(int j=0;j<n-1-i;j++)
   {
    if(arr[j]>arr[j+1])
    {
        swap(arr[j],arr[j+1]);
    }
  
   }}

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}