#include<iostream>
#include<algorithm>
using namespace std;
void select(int arr[],int n)
{
    // for the selection we need to select the smallest
    for(int i=0;i<n;i++)
    {
        // according to our requirment we can consider the first element as a smaalest 
        // cout<<arr[i]<<" ";
        int index=i;
      for(int j=0;j<n;j++)
    {
        if(arr[j]<arr[index])
        index=j;
        // here comapring the value and changing 

    int swap=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=swap;
    }
     // now we can swap 

   
   
    }
    //now we can tun the loop and print the value
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     
}


void bubble(int arr[],int n){
for(int i=n-2;i>=0;i--)
{
    for(int j=1;j<i;j++)
    {
        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}

// for running the loop and printing the value 
}

bool duplcate(int arr[],int arr1[],int n,int n1)
{
    sort(arr,arr+n);
    sort(arr1,arr1+n1);
    int i=0;
    int j=0;
    while(i<n && j<n1)
    {
        if(arr[i]==arr1[j])
        {
        i++;
        j++;
        // inceasing the value in the both the condition 
       }
        else
        {
        cout<<arr[i]<<" ";
        }

        // we can also using  the brute for and xor operation also
        // to comapring 
}


int main()
{
int arr[]={3,23,4,5,6,45};
int arr1[]={3,23,4,5,62,45};
int n= sizeof(arr)/sizeof(arr[0]);
int n1= sizeof(arr1)/sizeof(arr1[0]);
select(arr,n);

    return 0;
}