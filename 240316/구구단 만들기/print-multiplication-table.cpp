#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    for(int i=0;i<9;i++){
        for(int j=0;j<b/2;j++){
            cout << b-2*j <<" * "<< i+1 <<" = "<<(b-2*j)*(i+1);
            if(j<b/2-1){
                cout << " / ";
            }
        } 
        cout << endl;
    }
    return 0;
}