#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    char val_2 = s[1];
    for(int i=0;i<s.length();i++){
        if(s[i]==val_2){
            s[i] = s[0];
        }
    }
    cout <<s;
    return 0;
}