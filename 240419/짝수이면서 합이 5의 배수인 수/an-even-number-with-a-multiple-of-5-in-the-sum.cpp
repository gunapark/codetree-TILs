#include <iostream>
using namespace std;

bool num(int n){
    return n%2==0 & (n%10+n/10)%5==0;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if(num(n)) cout << "Yes";
    else cout << "No";
    return 0;
}