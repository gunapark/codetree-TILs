#include <iostream>
using namespace std;

int main() {
    int arr[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }
    int max[4];

    for(int i=0;i<4;i++){
        max[i]=0;
        for(int j=0;j<4;j++){
            max[i] += arr[i][j];
        }
    }
    for(int i=0;i<4;i++){
        cout << max[i] << endl;
    }
    return 0;
}