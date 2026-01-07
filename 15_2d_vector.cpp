#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>& mat) {
    for(int i = 0; i < mat.size(); i++) {
        for(int j = 0; j < mat[i].size(); j++) {
            cout << 2*mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // here we can usinng the int also 
    // int arr[][3]={1,2,3,4,5,6};
    // also a method to declering the array 
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print(mat);
}
