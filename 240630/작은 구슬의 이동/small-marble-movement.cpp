#include <iostream>
using namespace std;

int main() {
    //n은 격자의 크기 n*n, t는 주어진 초(시간)
    //r,c는 정수 초기 구슬이 r행 c열에 놓여있음
    //d는 문자열 U, D, R, L  중 하나 위(UP), 아래(DOWN), 오른쪽(RIGHT), 왼쪽(LEFT)

    int n, t, r, c;
    char d;
    int dx[4]={0,1,-1,0}, dy[4]={1,0,0,-1};
    cin >> n >> t;
    cin >> r >> c >> d;
    int dir;
    if(d=='U'){
        dir = 3;
    } else if(d=='D'){
        dir = 0;
    } else if(d=='R'){
        dir = 1;
    } else dir =2;
    int x=c, y=r;

    while(t--){
        
        if(x==1&&dir==2){
            dir = 1;
            continue;
        }else if(x==n&&dir==1){
            dir = 2;
            continue;
        }else if(y==1&&dir==3){
            dir = 0;
            continue;
        }else if(y==n&&dir==0){
            dir = 3;
            continue;
        }
        x += dx[dir];
        y += dy[dir];

    }
    cout << y << " " << x;
    return 0;
}