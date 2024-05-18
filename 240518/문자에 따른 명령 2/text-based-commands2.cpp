#include <iostream>
#include <string>
using namespace std;

int main() {
    int x=0, y=0;
    int dx[4]={0,1,0,-1}, dy[4]={1,0,-1,0};
    string order;
    int head=0;
    cin >> order; 
    int n=order.length();

    for(int i=0;i<n;i++){
        if(order[i]=='L'){
            head=(head-1+4)%4;
        }else if(order[i]=='R'){
            head=(head+1)%4;
        }else{
            x+=dx[head]; y+=dy[head];
        }
    }

    cout << x <<" "<< y;
    
    return 0;
}