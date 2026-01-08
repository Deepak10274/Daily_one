#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,1,2,2,2,2,2,2,2,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int candidates=0;

    for(int i=0;i<n;i++)
    {
        if(count==0)
        {
            count++;
            candidates=arr[i];
        }
        else{
            if(candidates==arr[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }

    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidates)
        {
            count++;
        }
    }

  
    if(count>n/2)
    {
        cout<<candidates;
    }
    else
    {
        cout<<" not finding the majority element ";
    }

    return 0;
}
