#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;


    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cnt++;
            if(cnt%10==0){
                cnt++;
            }
            cout << cnt%10;
        }
        cout << endl;
    }
    return 0;
}