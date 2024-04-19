#include <iostream>
using namespace std;


bool dffd(int n){
    for(int i=1;i<=n;i*=10){
        if((n/i)%10==3 || (n/i)%10==6 || (n/i)%10==9){
            return true;
        }
    }
    return false;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt=0;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        if(dffd(i) || i%3==0){
            cnt ++;
        }
    }

    cout << cnt;
    
    return 0;
}