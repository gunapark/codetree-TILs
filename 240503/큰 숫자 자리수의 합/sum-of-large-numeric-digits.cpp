#include <iostream>
using namespace std;

int sum(int a){
    if (a/10<1) return a;
    return sum(a/10) + a%10;
}

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    cout << sum(a*b*c);
    return 0;
}