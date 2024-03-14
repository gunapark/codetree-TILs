#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    while(1){
        int n;
        cin >> n;

        if(n<25)
            cout << "Higher" << endl;
        else if (n>25)
            cout << "Lower" << endl;
        else
            cout << "Good" << endl;
            break;
    }
    return 0;
}