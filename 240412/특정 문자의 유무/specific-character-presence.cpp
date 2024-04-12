#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin >> str;
    bool ee = false;
    bool ab = false;

    for(int i=0;str[i+1]!='\0';i++){
        if(str[i]=='e' & str[i+1]=='e'){
            ee = true;
        } 
    }
    if(ee) cout << "Yes";
    else cout << "No";
    cout << " ";

    for(int i=0;str[i+1]!='\0';i++){
        if(str[i]=='a' & str[i+1]=='b'){
            ab= true;
        } 
    }
    if(ab) cout << "Yes";
    else cout << "No";
    return 0;
}