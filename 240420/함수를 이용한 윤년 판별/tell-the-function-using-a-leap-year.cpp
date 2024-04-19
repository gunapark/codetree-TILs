#include <iostream>
using namespace std;

bool isyoon(int n){
    if(n%100 == 0 & n%400 !=0) return false;
    if(n%4==0) return true; 
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int y;
    cin >> y;
    if(isyoon(y)) cout << "true";
    else cout << "false";

    return 0;
}