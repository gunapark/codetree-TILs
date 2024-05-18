#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dx[4]={1,-1,0,0}, dy[4]={0,0,-1,1};
    int arr[n+2][n+2]={};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }

    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int mini_cnt=0;
            for(int z=0;z<4;z++){
                if(arr[i+dx[z]][j+dy[z]]==1) mini_cnt++;
            }
            if(mini_cnt>=3) cnt++;
        }
    }
    /*
    for(int i=0;i<n+2;i++){
        for(int j=0;j<n+2;j++){
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }*/
    cout << cnt;
    
    return 0;
}