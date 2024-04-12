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

    if(i>len){
        cout << str;
        return 0;
    }

    for(int j=1;j=<i;j++){
        cout << str[len-j];
    }
    
    return 0;
}