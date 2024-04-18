#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    string q;
    cin >> s >> q;

    int len_s = s.length();
    int len_q = q.length();

    for(int i=0;i<len_q;i++){
        if(q[i]=='L'){
            s = s.substr(1,len_s-1) + s.substr(0,1);
        } else if(q[i]=='R')
            s = s.substr(len_s-1,1) + s.substr(0,len_s-1);
    }
    cout << s;

    return 0;
}