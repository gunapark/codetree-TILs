#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, count=0;
    cin >> n;

    while(1){
        
        if(n%2==0){
            n /=2;
        } else {
            n = n*3+1;
        }
        count++;
        if(n==1){
            break;
        }
        
    }
    cout << count;
    return 0;
}