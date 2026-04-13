//  1 2 3 subset  subset = 
//  1 2 3 = 2*n= 3 element = 2*2*2=8;
//  1 ,2, 3 ,1 2, 1 3, 1 2 3, 2 3, 0; 2d array 1 d = 2d 
#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int index,int n,vector<vector<int>>&ans,vector<int>&temp)
{
     if(index==n)
     {
        ans.push_back(temp);
        return;
     }




    temp.push_back(arr[index]);
    subset(arr,index+1,n,ans,temp);
    temp.pop_back();
    subset(arr,index+1,n,ans,temp);

}
int main()
{
    int arr[]={1,2,3};
    vector<vector<int>>ans;
    // 1 subarray =2 it is the 11 d array
    // we have to create 1d array so we can store every element there 
    vector<int>temp;
    int index=0;
    int n = sizeof(arr)/sizeof(arr[0]);

    subset(arr,index, n,ans,temp);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
