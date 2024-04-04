#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    int sum_row[2]={0,}, sum_col[4]={0,},sum = 0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
            sum += arr[i][j];
            sum_row[i] += arr[i][j];
            sum_col[j] += arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);

    for(int i=0;i<2;i++)
        cout << double(sum_row[i])/4 << " ";
    cout << endl;
    for(int i=0;i<4;i++)
        cout << double(sum_col[i])/2 << " ";
    cout << endl << double(sum)/8;
    

    return 0;
}