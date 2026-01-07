#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    vector<int> arr(size);   // storing in hte vector 
    for(int i=0;i<size;i++)

    {
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=1;i<size;i++)
    {
        ans=min(ans,arr[i]);
    
}
cout<<ans <<" ";
return 0;

}
