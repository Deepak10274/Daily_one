#include<iostream>
using namespace std;
int Target(int arr[],int target)
{
for(int i=0;i<6;i++)
{
    if(arr[i]==target)
    return i;
}

return -1;
}
int main()
{
int arr[]={1,2,3,4,56,6};
int target =4;
int result=Target(arr,target);
cout<<result;






    return 0;
}