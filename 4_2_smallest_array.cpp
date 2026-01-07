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
cout<<"the first minimum  number is :  "<< ans <<" ";
cout<<endl;
int second=INT8_MAX; // if here declered the min s it will give -128

for(int i=0;i<5;i++)
{
if(arr[i]!=ans)
second=min(arr[i],second);
}
cout<<"the second smallest  number is : " << second<<" "; 
 return 0;
}