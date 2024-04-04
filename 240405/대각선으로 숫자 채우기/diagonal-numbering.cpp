#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int num=1;
    for(int k=0;k<=n+m-2;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+j==k){
                    arr[i][j]=num;
                    num++;
                }
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