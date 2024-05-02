#include <iostream>
using namespace std;

int cnt_task(int n){
    if(n==1) return 0;

    if(n%2==0) return cnt_task(n/2)+1;
    else return cnt_task(n/3) +1;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << cnt_task(n);
    return 0;
}