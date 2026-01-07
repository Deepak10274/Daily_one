
#include<iostream>
#include<map>
using namespace std;
int main()
{
int arr[]={2,3,4,5,6,7,2,3,4,5,2};
map<int,int>m;
int n=sizeof(arr)/sizeof arr[0];
for(int i=0;i<n;i++)
{
    m[arr[i]]++;  //  corrosponding of the iterating the value 
}
for(auto x:m)
{
    cout<<x.first<<"-> "<<x.second<<" ";
    cout<<endl;
}




    return 0;
}