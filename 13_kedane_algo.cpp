#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 4, -1, 3, 2};
    int n = arr.size();

    int currSum = 0;          
    int maxSum = INT_MIN;     

    for (int i = 0; i < n; i++) {
        currSum = currSum + arr[i];   
        maxSum = max(maxSum, currSum);

        if (currSum < 0) {
            currSum = 0;            
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum;
    return 0;
}
