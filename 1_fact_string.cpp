#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "548";
    int n = stoi(str);     // string to integer
    vector<int> ans(1, 1); // considering size one and element having 1 everytime ans pushing in it ans size increasing

    while (n > 1)
    {
        int carry = 0;
        int result;
        for (int i = 0; i < ans.size(); i++)
        {
            result = ans[i] * n + carry;
            ans[i] = result % 10;
            carry = result / 10;
        }
        while (carry)
        {
            ans.push_back(carry);
            carry = carry / 10;
        }

        n--;
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << "";
    }
    return 0;
}