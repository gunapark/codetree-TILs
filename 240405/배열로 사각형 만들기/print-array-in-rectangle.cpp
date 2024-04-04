#include <iostream>
using namespace std;

int main() {
    int arr[5][5] = {};

    for(int i=0;i<5;i++){
        arr[i][0] = 1;
        arr[0][i] = 1;
    }

    for(int row=1;row<5;row++){
        for(int col=1;col<5;col++){
            arr[row][col] = arr[row-1][col]+arr[row][col-1];
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}