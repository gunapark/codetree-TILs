#include <iostream>
using namespace std;
#define MAX_N 100

int arr[MAX_N][MAX_N];
bool check[MAX_N][MAX_N];

int main() {
    int n, m;
    cin >> n >> m;
    int dx[4] ={1, 0, -1, 0};
    int dy[4] ={0, 1, 0, -1};
    int dir = 0;
    int x=0, y=1;
    for(int i=1;i<=n*m;i++){
        int nt_x = x+dx[dir];
        int nt_y = y+dy[dir];
        if(nt_x>n || nt_y>m || check[nt_x][nt_y]|| nt_x<1 || nt_y<1){
            dir = (dir+1)%4;
        }
        x += dx[dir];
        y += dy[dir];
        arr[x][y] = i;
        check[x][y] = true;
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout << arr[j][i] << ' ';
        }
        cout << endl;
    }
    return 0;
}