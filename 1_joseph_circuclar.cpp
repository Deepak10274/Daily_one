#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n=10;
int k=5;
vector<int>ans;
int index=0;  // index always start from the 0 
for(int i=1;i<=n;i++)
{
    ans.push_back(i);
}   // pushing all the element in the array 
while(ans.size()>1)
{
    index= (index+k-1)%ans.size();  // index updating in the array so count start from that 
 
    ans.erase(ans.begin()+index);  // removing th eelement from the array from the begning 
}
   cout<<" the winner is :"<<ans[index]<<endl;  // the last remainign element we can print  





    return 0;
}