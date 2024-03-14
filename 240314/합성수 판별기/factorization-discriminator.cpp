#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool c=1;
    cin >> n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            c=false;
        }
    }
    if(c==1){
        cout << "N";
    }
    else
        cout << "C";
    return 0;
}