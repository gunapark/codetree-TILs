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
        for(int i=1;i<=len;i++){
            cout << str[len-i];
        }
        
    } else {
        for(int j=1;j<=i;j++){
            cout << str[len-j];
        }
    }

    
    
    return 0;
}