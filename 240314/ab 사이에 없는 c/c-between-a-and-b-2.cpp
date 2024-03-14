#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    bool sat=false;
    cin >> a >> b >> c;

    for(a;a<=b;a++){
        if(a%c==0){
            sat=true;
        }
    }
    if(sat==true){
        cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}