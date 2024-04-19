#include <iostream>
using namespace std;

bool bool_369(int n){
    return n%10 == 3 || n%10 == 6 || n%10 == 9 || n/10 == 3 || n/10 == 6 || n/10 == 9;
}

bool num_check(int n){
    return n%3 == 0 || bool_369(n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt=0;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        if(num_check(i)) cnt ++;
    }

    cout << cnt;

    return 0;
}