#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    int i;
    cin >> str;
    cin >> i;
    int len = str.length();

    for(int j=0;j<i;j++){
        cout << str[len-1-j];
    }
    
    return 0;
}