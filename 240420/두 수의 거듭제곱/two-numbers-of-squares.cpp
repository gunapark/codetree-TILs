#include <iostream>
using namespace std;

int a_b(int a, int b){
    int temp = a;
    for(int i=1;i<b;i++){
        temp *= a;
    }
    
    return temp;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    cout << a_b(a, b);
    return 0;
}