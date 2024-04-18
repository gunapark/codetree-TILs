#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    string new_s;
    int n;

    cin >> s >> n;

    int len = s.length();

    for(int i=0;i<n;i++){
        int q;
        cin >> q;

        if(q==1){
            s = s.substr(1,len-1) + s.substr(0,1);
            cout << s << endl;
        } else if (q==2){
            s = s.substr(len-1,1) + s.substr(0,len-1);
            cout << s << endl;
        } else {
            for(int i=0;i<len;i++){
                new_s += s.substr(len-1-i,1);
            }
            s = new_s;
            cout << s << endl;
        }
    }
    return 0;
}