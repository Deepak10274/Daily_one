#include <iostream>
#include <vector>
using namespace std;

int main() {
  int matrix[][4]={1,2,3,4,5,6,7,8,9,0,11,12};

    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int cols = sizeof(matrix[0])/sizeof(matrix[0][0]);

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

 

    while (top <= bottom && left <= right) {

      
        for (int j = left; j <= right; j++)
          cout<<matrix[top][j]<<" ";
           top++;
           cout<<endl;

        for (int i = top; i <= bottom; i++)
            cout<<matrix[i][right]<<" ";
        right--;
             cout<<endl;

        
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                cout<<matrix[bottom][j]<<" ";
            bottom--;
                 cout<<endl;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                cout<<matrix[i][left]<<" ";
            left++;
             cout<<endl;
        }
    }

    
    return 0;
}
