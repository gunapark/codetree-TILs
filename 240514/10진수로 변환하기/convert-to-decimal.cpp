#include <iostream>
using namespace std;

int main() {
    int binary, cnt=1;
    int ten=0;
    cin >> binary;
    while(binary>0){
        ten += binary%10*cnt;
        cnt *=2;
        binary/=10;
    }
    cout << ten;
    return 0;
}