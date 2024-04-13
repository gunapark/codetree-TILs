#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    char a;
    int index=-1;

    cin >> str >> a;


    for(int i=0;i<=str.length()-1;i++){
        if(str[i]==a){
            index = i;
            break;
        }
    }

    
    if(index == -1) cout << "No";
    else cout << index;
    return 0;
}