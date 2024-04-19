#include <iostream>

using namespace std;

void hello(int n, int m){
    int max, cnt =1;
    if(n>m) max = n;
    else max = m;

    while(true){
        
        if(max*cnt%n==0 && max*cnt%m==0){
            cout << max*cnt;
            break;
        }
        cnt++;
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin>> n >> m;

    hello(n,m);
    return 0;
}