#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    bool c=1;
    cin >> a >> b;

    for(a;a<=b;a++){
        if(1920%a==0 && 2880%a==0){
            c=true;
        }
    }
    if(c==0){
        cout << c;
    }
    else
        cout << c;
    return 0;
}