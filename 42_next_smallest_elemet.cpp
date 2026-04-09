#include <iostream>
#include <vector>
#include <stack>
using namespace std;
// brute force approach simple and debug everytime
void smallest(int arr[], vector<int> &ans, int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }
    for (int x : ans)
    {
        cout << x << " ";
    }
}

int main()
{
    int arr[] = {4, 5, 2, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans(n, -1);
    stack<int> st;

    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] > arr[i]) // change here
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    // here we can call the function also
    smallest(arr, ans, n);

    return 0;
}