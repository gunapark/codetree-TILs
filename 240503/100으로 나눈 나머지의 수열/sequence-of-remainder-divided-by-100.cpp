#include <iostream>
using namespace std;

int print_n(int n){
    if(n==1) return 2;
    if(n==2) return 4;
    return (print_n(n-1)*print_n(n-2))%100;
}

int main() {
    int n;
    cin >> n;

    cout << print_n(n);
    return 0;
}