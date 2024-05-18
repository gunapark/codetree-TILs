#include <iostream>
using namespace std;

int main() {
    int x=0, y=0;
    int dx[4]={-1,0,0,1}, dy[4]={0,-1,1,0};
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        char dir;
        int dis;
        cin >> dir >> dis;

        if(dir=='W'){
            x+=dx[0]*dis; y+=dy[0]*dis;
        }if(dir=='S'){
            x+=dx[1]*dis; y+=dy[1]*dis;
        }if(dir=='N'){
            x+=dx[2]*dis; y+=dy[2]*dis;
        }if(dir=='E'){
            x+=dx[3]*dis; y+=dy[3]*dis;
        }
    }
    cout << x << " "<< y;
    return 0;
}