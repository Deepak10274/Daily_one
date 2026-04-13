#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main()
{
    // int arr[] = {4, 5, 2, 10};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // vector<int> ans(n, -1);
    // stack<int> st;

    // for(int i = n - 1; i >= 0; i--)  // from end site to start site
    // {
    //     while(!st.empty() && st.top() <= arr[i])
    //     {
    //         st.pop();
    //     }

    //     if(st.empty())
    //         ans[i] = -1;
    //     else
    //         ans[i] = st.top();

    //     st.push(arr[i]);
    // }

    // for(int x : ans)
    //     cout << x << " ";


    int arr[] = {4, 5, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans(n, -1);
    stack<int> st;

    for(int i = 0; i < n; i++)  // from end site  site to end site
    {
        if(st.empty())
        {
            st.push(i);
        }
        else
        {
            while(!st.empty() && arr[st.top()] < arr[i])  // herelooking the top of the array element and current element
            {
                ans[st.top()] = arr[i];
                st.pop();
            }
            st.push(i);
        }
    }

    for(int deepak:ans)
    {
        cout<<deepak<<' ';
    }
        
    return 0;
}