#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string &A){
    int str_len = A.length();
    bool same = false;
    for(int i=0;i<str_len/2;i++){
        if(A[0]==A[str_len-1-i]) same = true;
        else{
            samse = false;
            break;
        }
    }
    return same;
}


int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    if(is_palindrome(A)) cout << "Yes";
    else cout << "No";
    return 0;
}