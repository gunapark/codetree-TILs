#include <iostream>
using namespace std;

int print_cnt(int n){
    if(n==1) return 0;
    if(n%2==0) return print_cnt(n/2) +1;
    return print_cnt(n*3+1) +1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    cout << print_cnt(n);
    return 0;
}