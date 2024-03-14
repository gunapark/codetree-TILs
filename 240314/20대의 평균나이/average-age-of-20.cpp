#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double sum = 0, count =0;

    while(1){
        int a;
        cin >> a;
        if(a>=20 && a<30){
            sum += a;
            count++;
        } else
            break;
    }
    cout << fixed;
    cout.precision(2);
    cout << sum/count;
    return 0;
}