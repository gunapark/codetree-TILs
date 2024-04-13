#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;

    cin >> s;
    int len = s.length();

    while(len!=1){
        int n;
        cin >> n;
        if (n>len){
            s.erase(len-1,1);
            cout << s << endl;
            len --;
        }
        else{
            s.erase(n,1);
            cout << s << endl;
            len--;
        }
    }

    return 0;
}