#include <iostream>
#include <string>
using namespace std;

int main() {
    int x=0, y=0;
    int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
    char dir;
    string F;
    int head=0;
    cin >> dir >> F;
    int n=F.length();

    if(dir=='R'){
        for(int i=0;i<n;i++){
            head=(head+1)%4;
            x+=dx[head]; y+=dy[head];
        }
    }else{
        for(int i=0;i<n;i++){
            head=(head-1+4)%4;
            x+=dx[head]; y+=dy[head];
        }
    }
    cout << x <<" "<< y;
    
    return 0;
}