#include <iostream>
using namespace std;

int main() {
    int n,m,num=0;
    cin >> n >> m;
    int arr[n][m];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                arr[j][i]=num;
                num++;
            } else{
                arr[n-j-1][i]=num;
                num++;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}