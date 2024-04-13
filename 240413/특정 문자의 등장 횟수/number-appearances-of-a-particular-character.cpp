#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str;
    cin>> str;
    int cnt_ee =0, cnt_eb=0;

    for(int i=0;str[i+1]!='\0';i++){
        if(str[i]=='e' & str[i+1] == 'e')
            cnt_ee++;
        if(str[i]== 'e' & str[i+1]=='b')
            cnt_eb++;
    }
    cout << cnt_ee << " " << cnt_eb;
    return 0;
}