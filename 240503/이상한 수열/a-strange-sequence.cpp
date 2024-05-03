#include <iostream>
using namespace std;

int return_n(int n){
    if(n==1) return 1;
    if(n==2) return 2;

    return return_n(n/3) + return_n(n-1);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << return_n(n);
    return 0;
}