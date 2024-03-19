#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8], sum=0;

    for(int i=0;i<8;i++){
        double score;
        cin >> score;
        arr[i]=score;
        sum += score;
    }
    cout << fixed;
    cout.precision(1);

    cout << sum/8;

    return 0;
}