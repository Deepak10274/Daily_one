#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, -2, 3, 4, -1};
    int n = arr.size();

    int maxSum =  -1; 

    for (int i = 0; i < n; i++) {             
        for (int j = i; j < n; j++) {          
            int sum = 0;

            cout << "Subarray: ";
            for (int k = i; k <= j; k++) {     
                cout << arr[k] << " ";
                sum += arr[k];
            }

            cout << "| Sum = " << sum << endl;

            if (sum > maxSum) {                
                maxSum = sum;
            }
        }
    }

    cout << "\nMaximum Subarray Sum = " << maxSum << endl;

    return 0;
}
