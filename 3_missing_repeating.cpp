#include<iostream>
#include<map>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,2,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    for(auto x:mp)
    {
        if(x.second==2)
        {
            cout<<"it is repeating numbeer"<<x.first<<" ";
        }
    }
  
    return 0;
}