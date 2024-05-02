#include <iostream>
using namespace std;

void print_int(int n){
    if(n==0) return;

    cout << n << " ";
    print_int(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;

    print_int(n);
    return 0;
}