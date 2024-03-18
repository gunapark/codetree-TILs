#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cnt++;
            cout << char(64+cnt);
            if ((65+cnt)==int('Z'))
                cnt=0;
        }
        cout << endl;
    }
    return 0;
}