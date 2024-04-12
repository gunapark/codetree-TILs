#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    string new_str;
    
    int new_len =0;
    int len = str.length();

    int cnt = 1;
    for(int i=0;i<len;i++){
        if(str[i]==str[i+1]){
            continue;
        } else 
            new_len +=2;
    }
    cout << new_len << endl;
    for(int i=0;i<len;i++){
        if(str[i]==str[i+1]){
            cnt ++;
            continue;
        } else 
            cout << str[i] << cnt;
            cnt= 1;
    }

    return 0;
}