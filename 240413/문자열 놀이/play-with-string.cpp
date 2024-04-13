#include <iostream>
#include <string>
using namespace std;


int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    int q;

    cin >> s >> q;


    for(int i=0;i<q;i++){
        int n;
        cin >> n;
        if(n==1){
            int a, b;
            cin >> a >> b;
            char buf;
            buf = s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=buf;
        } else{
            char a, b;
            cin >> a >> b;

            for(int i=0;s[i]!='\0';i++){
                if(s[i]==a){
                    s[i]=b;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}