#include <iostream>
using namespace std;

int sumation(int n){
    if(n%2==1){
        if(n==1) return 1;
        return sumation(n-2) + n;
    } else
        if(n==2) return 2;
        return sumation(n-2) + n;
}

int main() {
    int n;
    cin >> n;

    cout << sumation(n);
    return 0;
}