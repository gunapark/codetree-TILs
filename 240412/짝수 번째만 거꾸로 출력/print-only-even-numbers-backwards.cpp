#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    string new_str="";
    int len = str.length();

    for(int i=1;i<len;i+=2){
        new_str += str[i];
    }
    int new_len = new_str.length();

    for(int i=1;i<=new_len;i++){
        cout << new_str[new_len-i];
    }
    return 0;
}