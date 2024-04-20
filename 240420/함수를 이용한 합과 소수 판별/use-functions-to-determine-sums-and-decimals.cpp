#include <iostream>
using namespace std;

bool thtn(int a){
    int cnt = 0;
    for(int i=1;i<a;i++){
        if(a%i==0) cnt++;
    }
    if(cnt==1) return true;
    else return false;
}

bool cnt_Z(int a){
    int sum =0;
    for(int i=1;i<=a;i *=10){
        sum += (a/i)%10;
    }
    if(sum%2==0) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i=a;i<=b;i++){
        if(thtn(i) && cnt_Z(i)){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}