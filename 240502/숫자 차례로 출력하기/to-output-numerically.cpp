#include <iostream>
using namespace std;

void print_int1(int n){
    if(n==0) return;
    cout << n << " ";
    print_int1(n-1);
}

void print_int2(int n){
    if(n==0) return;
    print_int2(n-1);
    cout << n << " ";
}

int main() {
    int N;
    cin >> N;

    print_int2(N);
    cout << endl;
    print_int1(N);

    return 0;
}