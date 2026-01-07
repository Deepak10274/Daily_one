// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//     for(int i=4;i>=0;i--)
//     {
//         cout<<arr[i]<<"  ";
//     }
// }



#include<iostream>
using namespace std;
int main()
{
int arr[]={1,2,3,4,5};
int start=0;
int end=4;
while(start<end)
{
    int swap=arr[start];   // herer we need to subsitute there value 
    arr[start]=arr[end];
    arr[end]=swap;
    start++;
    end--;
}


 for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}