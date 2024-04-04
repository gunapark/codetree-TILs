#include <iostream>
using namespace std;

int main() {
    int n,num=1;
    cin >> n;
    int arr[n][n]= {};

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if((n-1-i)%2==0){
                arr[j][i]=num;
                num++;
            } else{
                arr[n-1-j][i]=num;
                num++;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}