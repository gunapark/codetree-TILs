#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str1, str2;
    cin>> str1 >> str2;

    int str1_len = str1.length();
    int str2_len = str2.length();

    if(str1_len > str2_len)
        cout << str1 << " " << str1_len;
    else if(str1_len < str2_len)
        cout << str2 << " " << str2_len;
    else    cout<< "same";
    
    return 0;
}