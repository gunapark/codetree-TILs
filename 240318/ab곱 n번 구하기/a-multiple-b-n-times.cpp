#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        int a, b;
        int prod=1;
        cin >> a >> b;
        for(int j=a;j<=b;j++){
            prod *=j;
            
        }
        cout << prod <<endl;
    }
    return 0;
}