#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str[10];
    int sum=0;
    for(int i=0;i<10;i++){
        cin >> str[i];
        sum += str[i].length();
    }
    cout << sum;
    
    return 0;
}