#include <iostream>
#include <string>
using namespace std;

bool is_true(string &A){
    int len = A.length();
    for(int i=0;i<len-1;i++){
        if(A[i]!=A[i+1]) return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    string A;
    cin >> A;

    if(is_true(A)) cout << "Yes";
    else cout << "No";
    
    return 0;
}