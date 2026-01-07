#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 10, 6, 4, 8,23, 1};
    int n = arr.size();

    int minElement = arr[0];     // minimum so far
    int maxDiff = INT_MIN;       

    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, arr[i] - minElement);

        // THERE is not mednatory to updating thevalue 
        // here not updating the the minimum element 
        // minElement=min(minElement,arr[i]);
       
    }

    cout << "Maximum Difference : " << maxDiff;
    return 0;
}
