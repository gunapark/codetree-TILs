#include <iostream>
using namespace std;

int sumation(int n){
    if(n/10<1) return n*n;

    return sumation(n/10) + (n%10)*(n%10);
}

int main() {
    int n;
    cin >> n;

    cout << sumation(n);
    return 0;
}