#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str="";

    for(int i=0;i<n;i++){
        string a;
        cin >> a;
        str.append(a);
    }

    cout << str;
    return 0;
}