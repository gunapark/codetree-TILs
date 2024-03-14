#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n, i=1;
    int prod=1;
    cin >> n;
    for(i;i<=n;i++){
        prod *= i;
        if(prod>=n)
            break;
    }
    cout << i;
    return 0;
}