#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    bool sat=true;
    cin >> n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            sat=false;
        }
    }
    if(sat==true)
        cout << "P";
    else
        cout << "C";
    return 0;
}