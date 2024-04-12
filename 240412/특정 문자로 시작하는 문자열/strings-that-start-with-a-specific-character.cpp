#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt=0, len_sum=0;
    char input;
    cin >> n;
    string str[n];
    
    for(int i=0;i<n;i++){
        cin >> str[i];
    }
    cin >> input;

    for(int i=0;i<n;i++){
        if(str[i][0]==input){
            cnt++;
            len_sum += str[i].length();
        }
    }

    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << double(len_sum)/cnt;
    return 0;
}