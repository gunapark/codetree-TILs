#include <iostream>
#include <string>
using namespace std;

string M,N;

int return_index(){
    int len_M = M.length();
    int len_N = N.length();
    bool same = false;
    for(int i=0;i<=len_M-len_N;i++){
        for(int j=0;j<len_N;j++){
            if(M[i+j]==N[j]) same = true;
            else {
                same = false;
                break;
            }
        }
        if(same==true) return i;
    }
    return -1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> M >> N;

    cout << return_index();
    return 0;
}