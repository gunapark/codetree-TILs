#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char input;
    cin >> input;
    int cnt=0;
    for(int i=0;i<5;i++){
        if(str[i][2]==input || str[i][3]== input){
            cout << str[i] << endl;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}