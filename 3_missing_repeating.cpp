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
    // for(auto y:mp)
    // {
    //     if(y.second==0)
    //     {
    //         cout<<"missing number << y.second " ";
    //     }
    // }

// can not finding the missing because if there is not element then it will not map 
    // for(auto y:mp)
    // {
    //     if(y.second==0)
    //     {
    //         cout<<y.first<<" " ;
    //     }
    // }
    return 0;
}