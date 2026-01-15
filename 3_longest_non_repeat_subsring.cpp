#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str = "abcdefght";
    vector<int> count(256, 0);
    int first = 0;
    int second = 0;
    int length = 0;
    while (second < str.length())
    {
        while (count[str[second]])
        {
            count[str[first]] = 0;
            first++;
        }
        count[str[second]] = 1;
        length = max(length, second - first + 1);
        second++;
    }
    cout << length << " ";

    return 0;
}