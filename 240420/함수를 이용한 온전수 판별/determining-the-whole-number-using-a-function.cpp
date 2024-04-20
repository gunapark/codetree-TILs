#include <iostream>
using namespace std;

bool check_hotsum(int i){
    return (i%2==0 || i%10 == 5 || (i%3==0 && i%9 !=0));
}

int ishotnum(int a, int b){
    int cnt = 0;

    for(int i=a;i<=b;i++){
        if(check_hotsum(i)){}
        else cnt++;
    }
    
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    
    cin >> a >> b;

    cout << ishotnum(a,b);
    return 0;
}