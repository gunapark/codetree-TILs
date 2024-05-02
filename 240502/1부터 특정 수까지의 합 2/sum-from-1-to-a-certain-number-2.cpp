#include <iostream>
using namespace std;

int sum_n(int n){
    if(n==1) return 1;

    return n+sum_n(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << sum_n(n);
    return 0;
}