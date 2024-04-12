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
        str += a;
    }

    for(int i=0;i<str.length();i++){
        cout << str[i];
        if(i%5==4){
            cout << endl;
        }
    }

    return 0;
}