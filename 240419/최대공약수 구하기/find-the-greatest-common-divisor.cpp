#include <iostream>
using namespace std;

void hello(int n, int m){
    int max;
    if(n>m){
        max=n;
    } else max=m;
    int max_dirtn=1;
    for(int i=1;i<=max;i++){
        if(n%i==0 && m%i==0){
            max_dirtn = i;
        }
    }
    cout << max_dirtn;
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;

    cin>>n>>m;

    hello(n,m);
    return 0;
}