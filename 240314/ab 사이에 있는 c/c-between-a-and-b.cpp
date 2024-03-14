#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    bool z= false;
    cin >> a >> b >> c;

    for(a;a<=b;a++){
        if(a%c==0){
            z=true;
        }
    }
    if(z==1){
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}