#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,2,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int>count(n,0);
    int repeating=-1;
    int missing=-1;
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<n;i++)
    {
        if(count[i]==2)
        {
            repeating=i;
        }
    }
    for(int i=1;i<n;i++)
    {
         if(count[i]==0)
        {
            missing=i;
        }
    }
   cout<<repeating<<""<<endl;
   cout<<missing<<" "<<endl;
    return 0;
    
}