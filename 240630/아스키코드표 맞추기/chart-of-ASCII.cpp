#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a[5]={};
    char b[5] = {};
    for(int i=0;i<5;i++){
        cin >> a[i];
    }
    for(int i=0;i<5;i++){
        b[i] = (char)a[i];
    }

    for(int i=0;i<5;i++){
        cout << b[i] << " ";
    }

    return 0;
}