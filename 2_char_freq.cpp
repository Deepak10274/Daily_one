#include<iostream>
#include<map>
using namespace std;
int main()
{
char arr[]={'a','c','a','m','a','c'};
map<char,int>m;
int n=sizeof(arr)/sizeof arr[0];
for(int i=0;i<n;i++)
{
    m[arr[i]]++;  //  corrosponding of the iterating the value 
}
for(auto x:m)
{
    // FOR USING THE PRINTING THE FIRST AND THE SECOND VALUE 
    cout<<x.first<<"-> "<<x.second<<" ";
    cout<<endl;
}




    return 0;
}