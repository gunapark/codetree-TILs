#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string str[n];
    int sum_str=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin >> str[i];
        sum_str += str[i].length();
        if(str[i][0]=='a') cnt++;
    }
    cout << sum_str << " " << cnt;
    return 0;
}