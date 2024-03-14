#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i=1;
    int sum=0;
    cin >> n;

    for(i;i<=n;i++){
        sum += i;
        if(sum>=n)
            break;
    }
    cout<< i;
    return 0;
}