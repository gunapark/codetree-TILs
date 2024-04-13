#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    string str2;
    int index = -1;


    cin >> str >> str2;

    int str_len = str.length();
    int str2_len = str2.length();

    for(int i=0;i<=str_len-str2_len;i++){
        for(int j=0;j<str2_len;j++){
            if(str[i+j] == str2[j]){
                index = i;
            } else {
                index = -1;
                break;
            }
        }
        if(index==i){
            break;
        }
    }
    cout << index;

    return 0;
}