#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    string B;
    int cnt=0;
    cin >> A >> B;


    for(int i=0;i<=A.length()-B.length();i++){
        bool a=false;
        for(int j=0;j<B.length();j++){
            if(A[i+j]==B[j]){
                a=true;
            } else{
                a = false;
                break;
            }
        }
        if(a==true){
            cnt ++;
        }
    }

    cout << cnt;
    return 0;
}