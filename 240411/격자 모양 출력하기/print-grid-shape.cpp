#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int arr[n][n]={};

    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        arr[a-1][b-1]=a*b;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}