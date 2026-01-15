#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 34, 67, 90};
    int k = 2; // number of students
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        end = end + arr[i];
        start = max(start, arr[i]);
    }

    cout << start << " " << end << endl;

    if (k > n)
    {
        cout << "not valid";
        return 0;
    }

    int ans;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int studentCount = 1;
        int pageSum = 0;

        for (int i = 0; i < n; i++)
        {
            if (pageSum + arr[i] <= mid)
            {
                pageSum += arr[i];
            }
            else
            {
                studentCount++;
                pageSum = arr[i];
            }
        }

        if (studentCount <= k)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "Answer = " << ans;
    return 0;
}
