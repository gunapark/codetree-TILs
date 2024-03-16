#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j)
                cout << "  ";
            else {
                cnt++;
                if(cnt==10){
                    cnt = 1;
                }
                cout << cnt << " ";
            }
        }
        cout << endl;
    }
    return 0;
}